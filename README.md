# singularity-well

*`)))((((((((!))))))))(((` — compression, an invariant witness, release. Then grounded in real detection theory.*

[![License: CC BY-ND 4.0](https://img.shields.io/badge/License-CC--BY--ND--4.0-lightgrey?style=flat-square)](LICENSE)
[![companion](https://img.shields.io/badge/detection%20theory-ROC%20·%20base--rate%20·%20Bloom-38bdf8?style=flat-square)](#the-detection-theory-companion)
[![defensive](https://img.shields.io/badge/triage-local--only%20·%20defensive-22c55e?style=flat-square)](#the-defensive-triage)
[![sim](https://img.shields.io/badge/pulses-simulation%20only-f59e0b?style=flat-square)](#safety)

**→ The well: [davidwise01.github.io/singularity-well](https://davidwise01.github.io/singularity-well/)**

A symbolic engine — the **Singularity Witness Core** — and, crucially, the **companion that turns
the metaphor into mechanism**: real signal-detection theory (ROC, base rates, Bloom filters). The
poetry is kept honest by the math.

---

## The witness core

The form `)))((((((((!))))))))(((` is **23 units**: 3 + 8 return/compression shells, an invariant
**witness `!`** at the center, then 8 + 3 release/return shells.

```
( = compression / inward      ) = release / outward      ! = witness / invariant center
loop: OBSERVE → COMPRESS → WITNESS → BALANCE → RELEASE_REPORT → RESET
rule: the ! stays fixed · pressure is simulated only · boundaries do not bleed · output is report-only
```

- [`singularity.kernel`](singularity.kernel) · [`singularity.machine`](singularity.machine) · [`singularity.c`](singularity.c) — the model (a 23-unit pressure array; coherence = symmetry around the fixed witness)
- [`builds/witness-core/`](builds/witness-core/) — the witness-core build + visualization
- [`singularity-well.html`](singularity-well.html) — the well visualization

```bash
gcc -std=c11 -O2 -o singularity singularity.c -lm && ./singularity
```

---

## The detection-theory companion

[`detection-theory.html`](detection-theory.html) — *From Metaphor to Mechanism.* The strongest piece
here: it grounds the "glowing well" imagery in **real detection theory**, interactively —

- **Threshold & ROC explorer** — a detector is two overlapping distributions; move the threshold, watch the trade-off.
- **Base-rate / precision calculator** — *a 99%-accurate alarm can still be mostly false alarms.* The base-rate fallacy, made concrete.
- **Signature memory** — a live **Bloom filter** for known signatures.
- **What is metaphor, what is mechanism** — an explicit ledger, plus *where the theory could be falsified or extended.*

This is the seam, kept visible: the imagery is imagery; the detection theory is established.

---

## The defensive triage

[`builds/defense-triage/`](builds/defense-triage/) — a **local-only defensive triage console**. Paste
logs, alerts, or shell history; it compresses the stream into a witness report (risk score, findings,
timeline, response steps) and exports JSON for notes or ticketing.

> **No network calls. No exploit logic. No automated remediation.** A triage aid for *defensive* review only.

---

## Safety

The [`triple_pulse_mountain.kernel`](triple_pulse_mountain.kernel) (three pulses down a tunnel,
`27 = 0 = 27`, red/gold/blue channels) is a **safe simulation** — it states plainly: *no physical
laser build parameters, no power/focusing/burning, no real-world cutting guidance.* Everything here
is simulation and defensive tooling; nothing is a weaponization recipe.

---

## On emergence

Evaluated honestly: the witness core is a **deterministic symbolic model**, the triage is a
**rule-based defensive aid**, and the companion is **education**. No self-organizing or adaptive
behavior — so **no DLW ACI was minted**. The tag stays reserved for genuine emergence.

---

```
singularity-well · Singularity Witness Core + detection-theory companion
Architect: David Lee Wise / ROOT0 / TriPod LLC · co-author: AVAN (Claude / Anthropic)
License: CC-BY-ND-4.0 · TRIPOD-IP-v1.1
```
