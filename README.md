 Hi, I'm Venkatesh 👋

- 🔭 Working on IoT with ESP32
- 🌱 Learning Embedded C++ 
- 🎯 Goal: IoT Internship
- 📍 Pune

  Day 1 - Traffic Signal with Arduino
Simulation:Wokwi - Arduino UNO
Logic: RED (3 sec) -> YELLOW (1 sec) -> GREEN (3 sec) -> loop

Wiring:
- RED -> Pin 13
- YELLOW -> Pin 12
- GREEN -> Pin 11
- GND -> GND

Code: Check in `Traffic-Signal/code.ino` folder
 ---
 Day 2 - Buzzer Alert System - Pin 8 & GND - tone(1000Hz) beep logic - Wokwi Simulation Done
   Code: `Buzzer-Alert/code.ino`
 ---
 Day 3 - Smart Traffic + Buzzer Alert
- RED (3s) + Buzzer Beep -> YELLOW (1s) -> GREEN (3s)
- Smart Pedestrian Alert System
- Code: `Smart-Traffic-Buzzer/code.ino`
  ---
   Day 4 - Button Control Traffic System
- Button Controlled Full Traffic Cycle 
- Pin: 2=Button, 13=RED, 12=YELLOW, 11=GREEN, 8=Buzzer
- Code: Button-Traffic/code.ino](Button-Traffic/code.ino
  ---
  # Day 05 - Intruder Detection with Face Capture

## What is this?
In this project, camera detects intruder face and saves only ONE cropped face photo.

## Problem Fixed
Earlier code saved many photos. Now fixed with 5 sec cooldown.

## How it Works
1. Camera ON -> Detects Face
2. Shows RED box + "INTRUDER DETECTED"
3. Saves only cropped face in `intruders/` folder
4. Waits 5 seconds before next save (No spam)

## Tech Used
- Python
- OpenCV (Haar Cascade)
- Time & Datetime module

## How to Run
``` 
pip install opencv-python
python intruder_single_save.py
```

## Output
File saved like: `intruders/intruder_2026-10-01_21-30-00.jpg`
Press 'q' to quit.

Intruder-Detection/README.md
---
- Wokwi Demo + Buzzer Alert
  Tools Used
- Arduino Uno
- Wokwi Simulator
- VS Code
📫 How to reach me: [Add your LinkedIn here]
