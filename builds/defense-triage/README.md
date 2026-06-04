# Singularity Witness Core — Useful Defensive Build

A local-only defensive triage console. Paste logs, alerts, shell history, or suspicious text; it compresses the stream into a witness report with risk score, findings, timeline, and response steps.

## Files
- `index.html` — browser app, no dependencies
- `singularity_triage.kernel` — kernel/spec model

## Use
Open `index.html` locally. Paste events. Click **Compress to Witness Core**. Export JSON for notes or ticketing.

## Safety
No network calls. No exploit logic. No automated remediation. It is a triage aid for defensive review.
