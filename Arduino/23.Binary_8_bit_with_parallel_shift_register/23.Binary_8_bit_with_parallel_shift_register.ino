int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=500;


byte LEDs=0x00;

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);

}

void loop() {
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);
  LEDs=LEDs+1;
  delay(dt);

}
