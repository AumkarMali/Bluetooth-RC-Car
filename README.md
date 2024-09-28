


[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)


# Bluetooth-Remote-Control-Car


This is a high-speed remote control car that employs Bluetooth technology and a mobile application. Bluetooth acts as the communication link between a mobile phone and the Arduino, which manages the drivetrain. The primary objective of this project was not only to develop an effective wireless system for controlling the car but also to ensure that it is mechanically robust, allowing it to handle higher speeds.

## Program Explanation

#### Motor Control
The car uses a total of 3 motors, 1 large DC motor to spin the wheels, a large servo motor to control steering, and a small 9g servo to act as a mechanical relay and turn the larger motor on or off. Each motor is initialized with some angle in a neutral position.

#### Communication with Mobile App (via Bluetooth)
The Bluetooth module will receive 1 byte of data (a character) from the mobile app and adjust the servo motors accordingly.

#### Mobile App
GUI programmed and designed in MIT App Inventor (Open .aia file in MIT App Inventor).


![Screenshot](https://i.ibb.co/KX71F6w/Screenshot-2024-09-27-220252.png)




## Authors

- [@AumkarMali](https://www.github.com/AumkarMali)


## Deployment

Download Arduino IDE from https://docs.arduino.cc/software/ide-v1/tutorials/Windows


## Links

➊ Github: https://github.com/AumkarMali/

➋ Youtube: https://www.youtube.com/channel/UC7rhCKur9bF01lV0pNJNkvA



