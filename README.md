# ESP32 LoRa RF Diagnostic Dashboard

## Overview

ESP32 LoRa RF Diagnostic Dashboard is a wireless RF monitoring and packet transmission system built using:

- ESP32 Development Board
- Ra-02 SX1278 LoRa Module
- ST7735 1.8" TFT Display

The system continuously transmits LoRa packets and displays real-time RF information on the TFT screen such as:

- Transmission Status
- Packet Counter
- Frequency
- TX Power
- Spreading Factor
- System Uptime
- Animated RF Signal Bars

This project demonstrates:

- Embedded Systems
- SPI Communication
- Wireless Communication Basics
- TFT Graphics Programming
- LoRa RF Transmission

---

# Components Required

- ESP32 Dev Board
- Ra-02 SX1278 LoRa Module (433MHz)
- ST7735 1.8" TFT LCD Display
- Jumper Wires
- USB Cable

---

# Circuit Connections

## ST7735 TFT Display → ESP32

| TFT Pin | ESP32 Pin |
|----------|------------|
| VCC | 3.3V |
| GND | GND |
| SCK | GPIO18 |
| SDA (MOSI) | GPIO23 |
| RES | GPIO4 |
| DC (A0) | GPIO22 |
| CS | GPIO21 |
| LED | 3.3V |

---

## Ra-02 SX1278 LoRa Module → ESP32

| Ra-02 Pin | ESP32 Pin |
|------------|------------|
| VCC | 3.3V |
| GND | GND |
| SCK | GPIO18 |
| MISO | GPIO19 |
| MOSI | GPIO23 |
| NSS (CS) | GPIO5 |
| RST | GPIO14 |
| DIO0 | GPIO2 |

---

# Important Notes

- All modules operate on 3.3V logic.
- Do NOT connect LoRa module to 5V.
- SPI pins are shared between TFT and LoRa.
- TFT and LoRa use different CS pins.
- Disconnect DIO0 (GPIO2) while uploading code if upload issues occur.
- GPIO21 is used for TFT CS to avoid ESP32 boot problems.

---

# Features

- Real-time LoRa packet transmission
- TFT graphical RF dashboard
- Packet transmission counter
- RF configuration display
- Animated signal strength bars
- Live uptime monitoring
- Embedded graphical interface

---

# Working Principle

1. ESP32 initializes the ST7735 TFT display.
2. Ra-02 LoRa module starts at 433MHz frequency.
3. ESP32 continuously transmits LoRa packets.
4. TFT dashboard updates in real time.
5. Packet count and RF parameters are displayed dynamically.

---

# Software Used

- Arduino IDE
- ESP32 Board Package

---

# Required Libraries

Install the following libraries from Arduino Library Manager:

- LoRa
- Adafruit GFX Library
- Adafruit ST7735 and ST7789 Library

---

# Output

The TFT display shows:

- LoRa RF Status
- Packet Counter
- Frequency Information
- TX Power
- Spreading Factor
- Uptime
- Animated Signal Bars

---

# Applications

- Wireless Communication Demonstration
- IoT Projects
- RF Monitoring Systems
- Embedded Systems Learning
- LoRa Communication Testing
- Smart Telemetry Systems

---

# Future Scope

- Add LoRa Receiver Node
- Two-way Wireless Communication
- Sensor Data Transmission
- GPS Tracking System
- IoT Cloud Integration
- Remote Monitoring Applications

---

# Author

Digvijay

---

# License

This project is created for educational and learning purposes.
