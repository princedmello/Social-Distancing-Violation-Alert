# 🚨 Social Distance Violation Alert

## 📌 Overview

During a pandemic, maintaining **social distancing** is critical to prevent the spread of infections. However, manually monitoring crowded areas is challenging for authorities. 

This project provides an **AI-powered digital solution** that detects social distancing violations using **Machine Learning and Computer Vision** techniques. By analyzing live video feeds from **CCTV cameras**, the system detects:
- **Crowds exceeding a predefined threshold** (as set by government regulations).
- **Individuals violating minimum distancing rules** using **Euclidean distance measurement**.

If a violation is detected, an **alert system** notifies the concerned authorities in real time. The model uses **YOLO (You Only Look Once) and OpenCV** to detect and track people in the video stream.

---

## 🚀 Features

- 📹 **Live Video Monitoring** – Analyzes CCTV footage in real-time.
- 🎯 **Human Detection** – Uses **YOLO & OpenCV** to identify people in the video.
- ⚠ **Violation Detection** – Tracks **crowd density** and **individual distances**.
- 🔔 **Alert System** – Notifies authorities when a violation occurs.
- ⏳ **Automated Monitoring** – Reduces manual effort and improves response time.

---

## 🛠 Tech Stack

| Technology  | Purpose |
|-------------|---------|
| 🖥 **Python** | Backend logic and ML implementation |
| 🎯 **YOLO (You Only Look Once)** | Real-time object detection |
| 👁 **OpenCV** | Computer vision processing |
| 📡 **CCTV/IP Camera** | Live video feed input |
| 🔌 **Arduino** | Hardware integration for LED & buzzer alerts |

---

## 📥 Installation & Setup

### 🔹 Prerequisites
Ensure you have the following installed:
- **Python 3.x**
- **Arduino IDE**
- **IP Webcam App** (for live video streaming)
- **YOLO Weights** (Download from Google Drive)

### 🔹 Clone the Repository
```sh
git clone https://github.com/your-username/social-distance-violation-alert.git
cd social-distance-violation-alert
