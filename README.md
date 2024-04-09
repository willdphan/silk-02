# SILK-02

The SILK-02 project is a curious endeavor to design and build a quadruped robot, blending the realms of robotics, design, and programming. The personal project served as a platform for exploring Arduino Nano applications, robotic movement, and integrating additional functionalities like an ESP32 camera for enhanced interaction capabilities.

It leverages the power of PlatformIO and Arduino framework, making it suitable for a wide range of projects from simple hobbyist creations to more complex, integrated systems.

Inspired by [MiniKame](https://github.com/JavierIH/miniKame/tree/develop) and [jarsofelectrical](https://github.com/jarsoftelectrical/OTTOquad)

## Key Files

- `src/arduino/OTTOKame.cpp` - Main source file for robot movements and behaviors.
- `src/arduino/OTTOKame.h` - Header file defining the robot's functions and constants.
- `src/arduino/Sketch_34.1_CameraWebServer.cpp` - Main source file for the ESP32 camera web server functionality.
- `src/arduino/app_httpd.cpp` - Handles HTTP server initialization and client requests processing.
- `platformio.ini` - Configuration file for PlatformIO project settings. Different envs for Arduino Nano and ESP32 boards.

## Clone Repo

To clone the SILK-02 repository, navigate to your desired workspace and use the following command in your terminal:

    git clone https://github.com/willdphan/silk-02.git

## Connect to WIFI

Go to the [sketch file](/SILK-02/src/esp32/Sketch_34.1_CameraWebServer.cpp) and input your wifi username and password in order to connect to the ESP32 camera.

## Start Up

To build and upload the project to your device, use PlatformIO's command-line interface:

    platform run --target upload

If you encounter any issues, try cleaning the project and rebuilding:

    platform run --target clean
    platform run --target upload

To run the build and upload to only arduino:

    platformio run --environment arduino 
    platformio run --target upload --environment arduino 

To run the build and upload to only esp32:

    platformio run --environment esp32
    platformio run --target upload --environment esp32

## What Can Be Improved?

- bluetooth control
- more algos for motion control
- use deep learning or reinforcement learning.
- faster processing times
- lighting features
- ...and much more

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.