
// Include Libraries
#include "Arduino.h"
#include "Servo.h"

// Pin Definitions
#define SERVO9G_PIN_SIG  10
#define servo2  9

// Global variables and defines
const int Rest   = 50;  //Starting position
const int left = 0;
const int right = 150;//Position when event is detected
int count = 0;

const int rest2 = 180;
const int on = 20;
Servo servo9g;
Servo ser;


long time0;

// Setup the essentials for your circuit to work. It runs first every time your circuit is powered with electricity.
void setup() 
{

    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    servo9g.attach(SERVO9G_PIN_SIG);
    servo9g.write(Rest);
    delay(100);
    servo9g.detach();

    ser.attach(servo2);
    ser.write(rest2);
    delay(100);
    ser.detach();
    
}


char rx_byte = 0;

void loop() 
{
  rx_byte = '\1';
  while(!Serial.available());
  if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();  
  }

Serial.println(rx_byte);

if((rx_byte == 'u')) {
    ser.attach(servo2);      
    ser.write(on);                                         
    }

if (rx_byte == 'p'){
  ser.attach(servo2);      
  ser.write(rest2);  
  delay(200);    
   ser.detach();  

}

if((rx_byte == 'l')) {
    servo9g.attach(SERVO9G_PIN_SIG);      
    servo9g.write(left);                                    
    }

if((rx_byte == 'f')) {
  servo9g.attach(SERVO9G_PIN_SIG);      
  servo9g.write(Rest);   
                      
  delay(200);                        
  servo9g.detach(); 
}
    
if((rx_byte == 'r')) {
  
    servo9g.attach(SERVO9G_PIN_SIG);      
    servo9g.write(right);  
                                        
    }

if((rx_byte == 'g')) {
  servo9g.attach(SERVO9G_PIN_SIG);      
  servo9g.write(Rest);   
                      
  delay(200);                        
  servo9g.detach(); 
}


    
}

    

    
