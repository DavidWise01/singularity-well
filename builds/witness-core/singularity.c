#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define UNITS 23

typedef struct {
    char form[UNITS + 1];
    double pressure[UNITS];
    double witness;
    double coherence;
    unsigned tick;
} Singularity;

void init(Singularity *s) {
    const char *f = ")))((((((((!))))))))(((";
    for (int i = 0; i < UNITS; i++) { s->form[i] = f[i]; s->pressure[i] = 0.0; }
    s->form[UNITS] = '\0';
    s->witness = 1.0;
    s->coherence = 1.0;
    s->tick = 0;
}

void step(Singularity *s) {
    int center = 11;
    double sum = 0.0;
    for (int i = 0; i < UNITS; i++) {
        double dist = fabs((double)(i - center));
        double wave = sin((s->tick * 0.11) + dist * 0.55);
        double inward = 1.0 / (1.0 + dist);
        s->pressure[i] = inward * (0.5 + 0.5 * wave);
        if (i != center) sum += s->pressure[i];
    }
    s->witness = s->pressure[center] = 1.0;
    double left = 0.0, right = 0.0;
    for (int i = 0; i < center; i++) left += s->pressure[i];
    for (int i = center + 1; i < UNITS; i++) right += s->pressure[i];
    double diff = fabs(left - right);
    s->coherence = 1.0 / (1.0 + diff);
    s->tick++;
}

int main(void) {
    Singularity s;
    init(&s);
    puts("SINGULARITY WITNESS CORE");
    puts(s.form);
    for (int i = 0; i < 16; i++) {
        step(&s);
        printf("tick=%02u coherence=%.3f witness=%.1f\n", s.tick, s.coherence, s.witness);
    }
    return 0;
}
