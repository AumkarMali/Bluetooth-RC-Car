// Include Libraries
#include "Arduino.h"
#include "Servo.h"

// Pin Definitions
#define SERVO9G_PIN_SIG  10
#define SERVO2_PIN       9

// Global variables and defines
const int REST_POSITION   = 50;  // Starting position for servo 9G
const int LEFT_POSITION   = 0;   // Left position for servo 9G
const int RIGHT_POSITION  = 150; // Position when event is detected
const int REST2_POSITION  = 180; // Rest position for servo 2
const int ON_POSITION     = 20;  // Active position for servo 2

Servo servo9g;
Servo servo2;

void setup() {
    Serial.begin(9600);
    while (!Serial); // Wait for serial port to connect
    Serial.println("Start");

    // Initialize servo positions
    servo9g.attach(SERVO9G_PIN_SIG);
    servo9g.write(REST_POSITION);
    delay(100);
    servo9g.detach();

    servo2.attach(SERVO2_PIN);
    servo2.write(REST2_POSITION);
    delay(100);
    servo2.detach();
}

char rx_byte = 0;

void loop() {
    if (Serial.available() > 0) { // Check if a character is available
        rx_byte = Serial.read();
        Serial.println(rx_byte);

        switch (rx_byte) {
            case 'u':
                servo2.attach(SERVO2_PIN);
                servo2.write(ON_POSITION);
                break;

            case 'p':
                servo2.attach(SERVO2_PIN);
                servo2.write(REST2_POSITION);
                delay(200);
                servo2.detach();
                break;

            case 'l':
                servo9g.attach(SERVO9G_PIN_SIG);
                servo9g.write(LEFT_POSITION);
                break;

            case 'f':
                servo9g.attach(SERVO9G_PIN_SIG);
                servo9g.write(REST_POSITION);
                delay(200);
                servo9g.detach();
                break;

            case 'r':
                servo9g.attach(SERVO9G_PIN_SIG);
                servo9g.write(RIGHT_POSITION);
                break;

            case 'g':
                servo9g.attach(SERVO9G_PIN_SIG);
                servo9g.write(REST_POSITION);
                delay(200);
                servo9g.detach();
                break;
        }
    }
}
