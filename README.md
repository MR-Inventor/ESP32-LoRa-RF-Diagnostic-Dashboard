# ESP32 LoRa RF Diagnostic Dashboard

## Overview
ESP32 LoRa RF Diagnostic Dashboard is a wireless RF monitoring and packet transmission system built using ESP32, SX1278 LoRa module, and ST7735 TFT display.

The project continuously transmits LoRa packets and displays real-time RF information such as:

- Transmission status
- Packet count
- Frequency
- TX power
- Spreading factor
- System uptime
- Signal strength animation

This project demonstrates embedded systems, SPI communication, wireless communication basics, and TFT graphical interfacing.

---

# Components Required

- ESP32 Development Board
- SX1278 LoRa Module (433MHz)
- ST7735 1.8" TFT Display
- Jumper Wires
- USB Cable

---

# Circuit Connections

## TFT Display Connections

| TFT Pin | ESP32 Pin |
|----------|------------|
| VCC | 3.3V |
| GND | GND |
| SCK | GPIO 18 |
| SDA / MOSI | GPIO 23 |
| RES | GPIO 4 |
| DC / A0 | GPIO 22 |
| CS | GPIO 15 |
| LED | 3.3V |

---

## LoRa SX1278 Connections

| LoRa Pin | ESP32 Pin |
|-----------|------------|
| VCC | 3.3V |
| GND | GND |
| SCK | GPIO 18 |
| MISO | GPIO 19 |
| MOSI | GPIO 23 |
| NSS / CS | GPIO 5 |
| RST | GPIO 14 |
| DIO0 | GPIO 2 |

---

# Features

- Real-time LoRa packet transmission
- TFT graphical dashboard
- Packet transmission counter
- RF configuration display
- Animated signal bars
- Embedded system monitoring
- Long-range wireless communication foundation

---

# Working Principle

1. ESP32 initializes the TFT display.
2. SX1278 LoRa module starts at 433MHz frequency.
3. ESP32 continuously sends LoRa packets.
4. TFT dashboard updates in real-time.
5. Packet count and RF status are displayed dynamically.

---

# Software Used

- Arduino IDE
- ESP32 Board Package
- LoRa Library
- Adafruit GFX Library
- Adafruit ST7735 Library

---

# Libraries Required

Install these libraries from Arduino Library Manager:

- LoRa
- Adafruit GFX
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
- Animated RF Signal Bars

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
- Real-time Remote Monitoring

---

# Author

Digvijay

---

# License

This project is developed for educational and learning purposes.
