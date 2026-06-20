#include <Servo.h>
Servo myBrushlessMotor; 
const int motorPin = 9; 
const int lowSpeed = 40; 
const int highSpeed = 80;
void setup() {
  Serial.begin(9600);
  myBrushlessMotor.attach(motorPin);
  Serial.println("Arming ESC... Keep clear of the motor!");
  myBrushlessMotor.write(0); 
  delay(3000); 
  Serial.println("ESC Armed. Starting 6-7 routine!");
}

void loop() {
  Serial.println("6...");
  myBrushlessMotor.write(lowSpeed); 
  delay(600); 
  Serial.println("...7! (67!)");
  myBrushlessMotor.write(highSpeed); 
  delay(700); 
}
