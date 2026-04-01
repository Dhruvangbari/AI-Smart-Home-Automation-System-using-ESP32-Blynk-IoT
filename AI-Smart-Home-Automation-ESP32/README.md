# AI Smart Home Automation System (ESP32 + Blynk) 🏠🤖

Advanced smart home automation with AI-style rules, scene management, and modular architecture.
Smart automation powered by sensor-driven intelligence.

This project implements an **AI-inspired Smart Home Automation System** using an **ESP32**, environmental sensors, relay modules, and **Blynk IoT cloud**.

Unlike basic automation projects, this system introduces **decision-based automation logic** and **scene management**, allowing the home to adapt automatically to changing environmental conditions.


Smart sensing. Intelligent decisions. Automated home control.

---

## 🧠 Project Overview

The ESP32 continuously monitors environmental conditions and automatically controls home appliances based on predefined smart rules.

The system supports both:

- 🤖 Automatic AI-style control
- 🎛 Scene-based manual control

### System Architecture

---

## ⚡ Key Features

- AI-style automation logic
- Scene manager system:
  - AUTO
  - NIGHT
  - AWAY
  - COMFORT
- Sensor-driven smart decisions
- Automatic fan and exhaust control
- Cloud monitoring using Blynk IoT
- Modular multi-file firmware architecture
- Auto WiFi reconnect system
- Expandable smart home platform

---

## 📂 Project Structure


This architecture follows **professional embedded firmware practices**.

---

## 🔧 Hardware Components

- ESP32 Development Board  
- Relay Module (4 Channel)  
- DHT11 Temperature & Humidity Sensor  
- MQ135 Air Quality Sensor  
- Home Appliances (Lights / Fan / Exhaust)  
- Smartphone with Blynk IoT App  

---

## 🔌 Pin Connections

| Device | ESP32 GPIO |
|--------|------------|
| Relay Light | GPIO 26 |
| Relay Fan | GPIO 27 |
| Relay Exhaust | GPIO 14 |
| Relay Aux | GPIO 12 |
| DHT11 | GPIO 4 |
| MQ135 AO | GPIO 34 |

---

## 🎛 Scene Manager

### AUTO
- Sensor-based intelligent automation

### NIGHT
- Lights OFF
- Fan ON

### AWAY
- All appliances OFF

### COMFORT
- Comfort-first settings

---

## 📱 Blynk Dashboard Setup

| Virtual Pin | Function |
|-------------|----------|
| V0 | Temperature |
| V1 | Humidity |
| V2 | Air Quality |
| V3 | Current Scene |
| V10 | Auto Mode Toggle |
| V20 | Scene Selector |

---

## 💻 Automation Logic

- High temperature → Fan ON
- Poor air quality → Exhaust ON
- High humidity → Auxiliary output ON
- Scene manager overrides defaults

---

## 🚀 Advanced Concepts Used

- AI-style decision system
- Scene-based automation design
- Modular firmware architecture
- Cloud IoT synchronization
- Smart environmental control

---

## 🎯 Applications

- Smart home automation
- Intelligent environment control
- IoT learning projects
- Embedded firmware portfolio
- Engineering final-year projects

---

## 🔮 Future Expansion Ideas

- Voice assistant integration
- Energy monitoring system
- Smart scheduling
- OTA firmware updates
- Multi-room home automation
- Edge AI learning models

---

## 🧠 Author
**Dhruvang Bari**

Built to demonstrate intelligent IoT home automation using modular embedded architecture.



## Advanced Features
- Modular multi-file firmware
- AI-style automation rules
- Scene manager (AUTO / NIGHT / AWAY / COMFORT)
- Environmental sensing (Temp / Humidity / Air Quality)
- Auto fan and exhaust control
- Cloud dashboard with Blynk
- Auto WiFi reconnect

## Blynk Virtual Pins
- V0 Temperature
- V1 Humidity
- V2 Air Raw
- V3 Scene Name
- V10 Auto Mode Toggle
- V20 Scene Selector

## Author
Dhruvang Bari
