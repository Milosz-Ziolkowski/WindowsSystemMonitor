# Windows System Monitor

A lightweight Windows system monitoring tool built with C++ to explore how system resources and performance information can be retrieved and displayed on Windows.

## About the Project

Windows System Monitor is a personal C++ project designed to provide an overview of a computer's system information and resource usage through a simple, readable interface in the terminal.

The aim of this project is to build a practical understanding of C++, Windows APIs, and system-level programming while developing a useful monitoring tool.

The project is being developed incrementally, starting with a basic application structure before introducing real-time system statistics and additional monitoring features.

## Current Features

- Basic application entry point and console output.
- Welcome screen introducing the Windows System Monitor.
- Project configured using CMake.
- C++17 enabled.
- Built and tested with the Microsoft C++ compiler (MSVC).

## Planned Features

- System Information — display basic information about the computer and operating system.
- CPU Monitoring — retrieve and display processor usage as a percentage.
- Memory Monitoring — show total, used, and available system memory.
- Live Updates — refresh system statistics periodically.
- Improved Console Interface — organize monitoring information into a clear, easy-to-read layout.
- Error Handling — handle situations where system information cannot be retrieved.
- Code Organization — separate functionality into reusable components as the project grows.

Features will be implemented and documented as development progresses.

## Technologies Used

- C++17 — core programming language.
- Windows API — planned for retrieving system information and performance statistics.
- CMake — build system and project configuration.
- Microsoft Visual C++ (MSVC) — compiler.
- Visual Studio Code — development environment.

## Building the Project

### Requirements

- Windows
- A C++ compiler, such as MSVC
- CMake 3.20 or newer
- Visual Studio Code or another suitable code editor

### Build Instructions

1. Configure the project:

   ```bash
   cmake -S . -B build -G "Visual Studio 18 2026" -A x64
   ```

2. Build the project:

   ```bash
   cmake --build build --config Debug
   ```

3. Run the executable from PowerShell:

   ```powershell
   .\build\Debug\SystemMonitor.exe
   ```

## Project Structure

```text
WindowsSystemMonitor/
├── CMakeLists.txt
├── README.md
├── src/
│   └── main.cpp
└── build/  # Generated build files
```

The `build/` directory contains generated build files and is not source code.

## Project Goals

- Improve my understanding of modern C++ fundamentals.
- Learn how to interact with the Windows operating system through its APIs.
- Gain practical experience with CMake and compiling C++ applications.
- Explore CPU and memory monitoring.
- Develop a well-structured project suitable for a programming portfolio.

## Status

In development.

The initial console application and CMake build setup are working. System information retrieval and resource monitoring features will be added progressively.

## Author

Milosz