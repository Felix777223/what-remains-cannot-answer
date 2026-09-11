# References and credits

## Artistic and conceptual references

- Christensen, D. R. and Sumiala, J. (2024). Introducing the Special Issue Digital Death: Transforming Rituals, History, and the Afterlife. *Social Sciences*, 13(7), 346. https://doi.org/10.3390/socsci13070346
- Lozano-Hemmer, R. (2011). *Voice Array (Subsculpture 13).* https://www.lozano-hemmer.com/voice_array.php
- Sonification Art (2017). *Artefact#0, Digital Necrophony*, 19 May. https://sonificationart.wordpress.com/2017/05/19/artefact0-digital-necrophony/
- The Haunted Palace Blog (2017). *Part Two: Thomas Edison: The Wizard of Menlo Park and His ‘Spirit Phone’*, 14 May. https://hauntedpalaceblog.com/2017/05/14/part-two-thomas-edison-the-wizard-of-menlo-park-and-his-spirit-phone/
- Thomas Edison Birthplace Museum (n.d.). *Dialing the Dead: Edison’s Attempt to Communicate with Those in the Afterlife.* https://www.tomedison.org/blog/dialing-the-dead-edisons-attempt-to-communicate-with-those-in-the-afterlife

## Technical references and adaptation

- PPPANIK (2026). *Geometric Fractals – TouchDesigner Tutorial* [YouTube video]. https://www.youtube.com/watch?v=8-lD2MTsfLA
  - Foundation for the visual system. My development included mirroring, shape and colour studies, distortion, OSC mapping and prompt transitions.
- The Interactive & Immersive HQ (2022). *Connect TouchDesigner & Max 8 with OSC* [YouTube video]. https://www.youtube.com/watch?v=AcqC5rRmu3M
  - Reference for communication between Max and TouchDesigner. The supplied project uses `/remains/amp`, `/remains/state` and `/remains/decay`.
- *Surface transducer demonstration* (n.d.) [YouTube video; descriptive title, channel and publication date unverified]. https://www.youtube.com/watch?v=Q5kLQrYRk1c
  - Hardware research reference.
- My earlier Max assignment, *Echo Accumulator*, informed delay, filtering and decay. My earlier installation, *Unanswered Signal*, explored relationships between bodily interaction, sound, imagery and vibration.

## Sound assets

The supplied Max patch references the following third-party effects. Audio binaries are not included in this repository; obtain them from the source under the applicable licence and place them in the `max` folder.

| Source | Effect | Required filename | Use |
| --- | --- | --- | --- |
| Mixkit | High tech notification bleep | `mixkit-high-tech-notification-bleep-2519.wav` | Recording cue |
| Mixkit | Futuristic Sci Fi computer ambience | `mixkit-futuristic-sci-fi-computer-ambience-2507.wav` | Background ambience |

Source collection: https://mixkit.co/free-sound-effects/high-tech/

Additional sound research: Envato, *Futuristic Sounds*, https://elements.envato.com/sound-effects/futuristic-sounds. This is a research reference, not the source credited for the two files above.

## AI use statement

I used AI to assist with troubleshooting and English-language editing. I subsequently revised the trigger logic, sound processing and visual mappings myself, completed the hardware and software integration, and tested the installation. AI-generated images were used for concept development and to visualise the speculative future installation shown in Fig. 20 of my project documentation.

AI assistance was also used to organise this repository and draft its documentation from the supplied files and project account. The supplied firmware, Max patch and TouchDesigner project were copied without code changes during repository preparation.

## Images and reuse

Project documentation images were supplied by the artist. The repository images are rendered directly from the supplied project PDF. Its reference artwork images retain their original credits. `future-concept.jpg` is the AI-generated proposal from page 9. Source pages and crop bounds are recorded in `image-manifest.json`.

No general open-source licence has been assigned to this repository. Third-party tutorials and sound effects retain their own terms; their inclusion in the credits does not grant redistribution rights.
