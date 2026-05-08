# ESP32 LoRa RF Diagnostic Dashboard

## Overview

ESP32 LoRa RF Diagnostic Dashboard is a wireless RF monitoring and packet transmission system built using:

- ESP32 Development Board
- Ra-02 SX1278 LoRa Module
- ST7735 1.8" TFT Display

The project continuously transmits LoRa packets and displays real-time RF information such as transmission status, packet count, frequency, uptime, and RF activity on the TFT display.

This project demonstrates:

- Embedded Systems
- SPI Communication
- LoRa Wireless Transmission
- TFT Graphics Interface
- ESP32 Programming

---

# Components Required

- ESP32 Development Board
- Ra-02 SX1278 LoRa Module
- ST7735 1.8" TFT Display
- Jumper Wires
- USB Cable

---

# Circuit Connections

Connect the LoRa RA-02 module and TFT display to the ESP32 using SPI communication.

## LoRa RA-02 Connections

| LoRa RA-02 Pin | ESP32 Pin |
|----------------|------------|
| 3.3V | 3V3 |
| GND | GND |
| SCK | GPIO 18 |
| MISO | GPIO 19 |
| MOSI | GPIO 23 |
| NSS / CS | GPIO 5 |
| RST | GPIO 14 |
| DIO0 | GPIO 2 |

---

## ST7735 TFT Display Connections

| TFT Pin | ESP32 Pin |
|----------|------------|
| VCC | 3V3 |
| GND | GND |
| SCL / SCK | GPIO 18 |
| SDA / MOSI | GPIO 23 |
| RES | GPIO 4 |
| A0 / DC | GPIO 22 |
| CS | GPIO 15 |
| LED | 3V3 |

---

# SPI Communication

Both the LoRa module and TFT display share the same SPI bus:

| SPI Signal | ESP32 Pin |
|-------------|------------|
| SCK | GPIO 18 |
| MOSI | GPIO 23 |
| MISO | GPIO 19 |

Separate CS (Chip Select) pins are used for proper SPI communication.

---

# Features

- Real-time LoRa packet transmission
- TFT graphical dashboard
- Packet transmission counter
- RF status monitoring
- Animated signal bars
- System uptime display
- Embedded graphical interface

---

# Working Principle

1. ESP32 initializes the TFT display.
2. The Ra-02 LoRa module starts at 433MHz frequency.
3. ESP32 continuously transmits LoRa packets.
4. The TFT display updates the RF dashboard in real time.
5. Packet count and transmission details are displayed dynamically.

---

# Software Used

- Arduino IDE
- ESP32 Board Package

---

# Required Libraries

Install the following libraries using Arduino Library Manager:

- LoRa
- Adafruit GFX Library
- Adafruit ST7735 and ST7789 Library

---

# Output

The TFT display shows:

- LoRa RF Status
- Packet Counter
- Frequency Information
- Uptime
- RF Signal Activity

---

# Applications

- Wireless Communication Systems
- IoT Demonstration Projects
- RF Monitoring Systems
- Embedded Systems Learning
- LoRa Communication Testing
- Smart Telemetry Systems

---

# Future Scope

- Add LoRa Receiver Node
- Two-way Wireless Communication
- Sensor Data Transmission
- GPS Tracking
- IoT Cloud Integration
- Remote Monitoring Applications

---

# Author

Digvijay

---

# License

This project is developed for educational and learning purposes.
