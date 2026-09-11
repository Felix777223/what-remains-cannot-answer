# Setup and technical notes

## Requirements

- ESP32 board and analogue lever/joystick input.
- Arduino IDE with support for the actual ESP32 board.
- Max with the `o.pack` object available (provided by the odot package).
- TouchDesigner. The supplied `.toe` must be opened to confirm its version compatibility and any additional project dependencies.
- Microphone, audio output, amplifier, surface transducer and projector.
- Two external sound files listed in [References](REFERENCES.md#sound-assets).

## 1. Controller

Open `firmware/butoon/butoon.ino` in Arduino IDE, select the connected ESP32 board and port, and upload it. The sketch reads GPIO 15 at 20 ms intervals and uses serial at 115200 baud.

- An analogue reading below 1000 or above 3000 sends `1` followed by a newline.
- Readings between 1600 and 2500 re-arm the trigger.
- The centre must be reached before another movement generates a trigger.

These are the values in the supplied sketch. Check the actual wiring and sensor range; the repository does not yet include a verified wiring diagram or exact board model. Close Serial Monitor before opening the same port in Max.

## 2. Max and audio

Open `max/Final_Max_Sound_Stable.maxpat`. The supplied serial object is `serial COM3 115200 @poll 10`; change COM3 to the port used by your controller.

Obtain the two credited audio files and place them alongside the Max patch using the exact filenames below, or update their `open` messages:

```text
mixkit-high-tech-notification-bleep-2519.wav
mixkit-futuristic-sci-fi-computer-ambience-2507.wav
```

Make sure `o.pack` resolves. Select the microphone input and the intended audio output in Max, then enable audio. Check the amplifier and transducer output at a low level before testing the full sequence.

The supplied patch contains `buffer~ voice_memory 2200`. This specifies a 2200 ms buffer; it should not be treated as proof of the complete recording or interaction duration. Check the trigger and timing chain in Max when adjusting the sequence.

## 3. OSC and TouchDesigner

Max contains `o.pack` messages for these addresses, connected to `udpsend 127.0.0.1 7000`:

| Address | Intended control role |
| --- | --- |
| `/remains/amp` | Amplitude-related control value |
| `/remains/state` | Sequence/state control |
| `/remains/decay` | Decay-related control value |

Open `touchdesigner/final.toe` on the same computer and inspect its OSC input. Confirm that it listens on port 7000 and that the received channels reach the intended visual controls. The exact TouchDesigner mappings have not been independently inspected from this binary file during repository preparation.

`127.0.0.1` refers to the same computer. Running Max and TouchDesigner on separate computers requires a different destination address and corresponding network configuration.

Select the projector output and test the idle text, triggered imagery, five returns, fade-out and return to the prompt.

## Verification status

Repository preparation checked the Max JSON, controller source, OSC address strings, audio filenames and documentation links within the repository. It did not compile the firmware, execute Max or TouchDesigner, or test connected hardware. Version numbers, exact wiring and a fresh full-sequence test remain to be recorded for reproducibility.
