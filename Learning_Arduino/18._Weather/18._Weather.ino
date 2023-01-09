#include <Servo.h>
int servoPin=9;
int lightPin=3;
int voltagePin=A4;
int lightVal;
int angle;
int dt=100;

Servo mrServo;

void setup() {
pinMode(voltagePin,INPUT);
pinMode(servoPin,OUTPUT);
pinMode(lightPin,OUTPUT);
Serial.begin(9600);
mrServo.attach(servoPin);

}

void loop() {
lightVal=analogRead(voltagePin);
Serial.println(lightVal);

mrServo.write(angle);
}
