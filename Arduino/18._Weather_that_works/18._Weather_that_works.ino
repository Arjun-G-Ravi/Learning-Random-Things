#include <Servo.h>
int servoPin=10;
int angle=0;
int readPin=A0;
int readVal;
int lightPin=3;
int dt=100;

int blueLED=7;

Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(servoPin);
Serial.begin(9600);
pinMode(servoPin,OUTPUT);
pinMode(readPin,INPUT);
pinMode(lightPin,OUTPUT);
pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blueLED,HIGH);
  digitalWrite(lightPin,HIGH);
  readVal=analogRead(readPin);
  Serial.println(readVal);

angle=(180./623.)*(readVal-400);
myservo.write(angle);
delay(dt);


}
