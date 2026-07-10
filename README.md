First-year graduation project in IOT
# Smart Classroom Management System

A simple Internet of Things (IoT) project developed using Arduino as a **First-Year Final Project**.

## 📌 Project Overview

This project simulates a smart classroom management system that automatically monitors classroom occupancy and controls lighting based on ambient light conditions.

The system uses:
- A push button to simulate student entry.
- A 7-segment display to show the current number of students.
- An LDR (Light Dependent Resistor) to detect room brightness.
- An LED to simulate classroom lighting and occupancy warning.

## ✨ Features

- Increment student count using a push button.
- Display the current number of students (1–9) on a 7-segment display.
- Automatically turn the classroom light ON when the room is dark.
- Turn the light OFF when sufficient light is available.
- Blink the LED continuously when the classroom reaches maximum capacity (9 students).

## 🛠 Components

- Arduino UNO
- Push Button
- LDR Sensor
- LED
- 220Ω Resistor
- 7-Segment Display (Common Cathode)
- Jumper Wires

## 🔌 Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| Push Button | D2 |
| LED | D3 |
| LDR | A0 |
| Segment A | D4 |
| Segment B | D5 |
| Segment C | D6 |
| Segment D | D7 |
| Segment E | D8 |
| Segment F | D9 |
| Segment G | D10 |

## ⚙️ How It Works

1. Press the push button to increase the student count.
2. The 7-segment display updates to show the current number of students.
3. The LDR continuously measures ambient light.
4. If the room is dark, the LED turns ON.
5. If the room is bright, the LED turns OFF.
6. When the student count reaches 9, the LED starts blinking to indicate that the classroom is full.

## 💻 Technologies Used

- Arduino IDE
- C/C++
- Proteus 8 Professional

## 📷 Simulation

 add screenshots of the Proteus simulation here.
 
## 📁 Files

- `Smart_Classroom.ino` → Arduino source code.
- `Smart_Classroom.pdsprj` → Proteus simulation project.
- `Smart_Classroom.hex` → Compiled HEX file for Proteus simulation.
- `Presentation.pptx` → Project presentation.
- `README.md` → Project documentation.
## 🎯 Learning Outcomes

- Arduino programming using C/C++.
- Interfacing sensors and output devices.
- Reading analog data from an LDR.
- Controlling LEDs based on sensor input.
- Using a 7-segment display for numerical output.
- Designing and testing circuits in Proteus.

## 📜 License

This project was developed for educational purposes as a **First-Year Final Project**.

## 👩‍💻 Author

**Rehab Adel**  
First-Year Information Technology Student
