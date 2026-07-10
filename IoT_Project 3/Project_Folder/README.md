# Cloud-Connected Security Node (IoT Telemetry)

A professional IoT edge-computed security system designed to detect physical intrusions and stream live telemetry data over the internet to a centralized cloud dashboard. Built as part of the DecodeLabs Industrial Training program.

## 🚀 Project Overview
This project bridges the gap between local physical events and global internet infrastructure. It configures a local Wi-Fi network stack on a microcontroller to read distance streams from an ultrasonic sensor. When an intruder is detected, the real-time telemetry payload is transmitted using lightweight protocols to a live cloud dashboard for visualization and alerting.

## 🛠️ Key Features
*   **Wi-Fi Stack Configuration:** Robust local network connection handling with auto-reconnect logic.
*   **Lightweight Telemetry:** Optimized data streaming using MQTT / HTTP POST protocols to minimize network overhead and latency.
*   **Live Cloud Dashboard:** Integration with [Adafruit IO / Blynk] for real-time visualization of security events and distance streams.
*   **Edge Intrusion Detection:** Real-time distance tracking via an ultrasonic sensor to flag boundary breaches instantly.

## 🎛️ Hardware & Component Requirements
*   **Microcontroller:** [e.g., ESP8266 / ESP32 / NodeMCU]
*   **Sensor:** HC-SR04 Ultrasonic Distance Sensor
*   **Connectivity:** On-board Wi-Fi module
*   **Miscellaneous:** Jumper wires, Breadboard, USB Data Cable

## 📊 System Architecture & Tech Stack
*   **Firmware Language:** C++ (Arduino IDE)
*   **Protocols:** MQTT / HTTP POST
*   **IoT Cloud Platform:** [Adafruit IO / Blynk]

## 💻 Setup & Installation

1.  **Clone the Repository:**
    ```bash
    git clone [https://github.com/YOUR_USERNAME/IoT-Cloud-Security-Node.git](https://github.com/YOUR_USERNAME/IoT-Cloud-Security-Node.git)
    ```
2.  **Configure Hardware:**
    *   Connect the Ultrasonic Sensor `Trig` and `Echo` pins to the configured GPIO pins on your microcontroller.
    *   Power the sensor appropriately ($5\text{V}$ or $3.3\text{V}$ depending on your hardware model).
3.  **Update Credentials:**
    *   Open the source code file and replace the placeholders with your local network and cloud credentials:
    ```cpp
    const char* ssid = "YOUR_WIFI_SSID";
    const char* password = "YOUR_WIFI_PASSWORD";
    #define IO_USERNAME "YOUR_CLOUD_USERNAME"
    #define IO_KEY "YOUR_CLOUD_API_KEY"
    ```
4.  **Upload Code:** Open the project in Arduino IDE, install the required libraries (`PubSubClient`, `Adafruit_MQTT`, etc.), and flash it to your board.

## 📈 Learning Outcomes & Technical Mastery
*   Mastered full-stack IoT architecture from physical sensor inputs to cloud data visualization.
*   Analyzed network latency differences between HTTP requests and MQTT publish commands.
*   Handled embedded network errors gracefully (e.g., `"Wi-Fi Disconnected"` or `"MQTT Connection Refused"` exception logic).

---
*Developed during the DecodeLabs Industrial Training Kit (Batch 2026).*
