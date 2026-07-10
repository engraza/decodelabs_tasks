# 🌱 Automated Irrigation Controller using ESP32

> **An IoT-based smart irrigation system that automatically monitors soil moisture and controls a water pump using ESP32 and relay logic.**

---

## 📌 Project Overview

The **Automated Irrigation Controller** is designed to reduce water wastage by automatically irrigating plants only when the soil becomes dry.

The ESP32 continuously reads the analog value from the soil moisture sensor. Based on a predefined threshold, it decides whether to activate or deactivate the relay, which simulates the operation of a water pump.

This project demonstrates the implementation of:

* Analog-to-Digital Conversion (ADC)
* Closed-loop control system
* Threshold-based decision making
* Relay interfacing
* Non-blocking programming using `millis()`

---

## 🎯 Objectives

* Read real-time soil moisture values.
* Process analog sensor data using ESP32 ADC.
* Automatically control a relay module.
* Simulate an automatic irrigation system.
* Implement efficient timing using `millis()` instead of `delay()`.

---

## 🛠 Hardware Components

| Component                                              | Quantity |
| ------------------------------------------------------ | -------: |
| ESP32 DevKit V1                                        |        1 |
| Soil Moisture Sensor *(Simulated using Potentiometer)* |        1 |
| Relay Module (5V)                                      |        1 |
| LED (Pump Indicator)                                   |        1 |
| 220Ω Resistor                                          |        1 |

---

## 💻 Software & Tools

* Arduino IDE
* Wokwi Simulator
* Git & GitHub

---

## ⚙️ Working Principle

1. ESP32 reads the analog value from the soil moisture sensor.
2. The measured value is compared with a predefined threshold.
3. If the soil is dry:

   * Relay turns ON
   * Pump starts
4. If the soil is sufficiently wet:

   * Relay turns OFF
   * Pump stops
5. The system continuously repeats this process every second using `millis()` without blocking the processor.

---

## 🔄 System Flow

```text
Start
   │
   ▼
Read Soil Moisture
   │
   ▼
Compare with Threshold
   │
 ┌─┴──────────────┐
 │                │
 ▼                ▼
Dry Soil      Wet Soil
 │                │
 ▼                ▼
Relay ON      Relay OFF
 │                │
 ▼                ▼
Pump ON       Pump OFF
```

## ✨ Features

* ESP32 based IoT project
* Automatic irrigation control
* Analog sensor interfacing
* Relay control logic
* Serial Monitor debugging
* Non-blocking code using `millis()`
* Easy to expand for cloud-based IoT applications

---

## 🚀 Future Improvements

* Wi-Fi monitoring using ESP32
* Mobile app integration
* MQTT communication
* Blynk dashboard
* Automatic notifications
* Weather-based irrigation scheduling
* OLED/LCD display support

---

## 📖 Learning Outcomes

Through this project, I gained practical experience in:

* ESP32 Programming
* Analog-to-Digital Conversion (ADC)
* Embedded C / Arduino Programming
* Relay Interfacing
* Sensor Data Processing
* Closed-Loop Automation
* IoT System Design
* GitHub Project Management

---

## 👨‍💻 Author

**M Raza**

IoT & Embedded Systems, PCB designer Enthusiast
If this project helped you learn something new, consider giving it a ⭐ to support the project.


