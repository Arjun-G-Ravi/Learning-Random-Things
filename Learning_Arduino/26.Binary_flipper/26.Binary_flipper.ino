int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=500;
byte LEDs1=0b01100100;
byte LEDs2=0xFF-LEDs1;


void setup() {
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void loop() {
  //Serial.println(LEDs,HEX);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs1);
  digitalWrite(latchPin,HIGH);
  delay(dt);

  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs2);
  digitalWrite(latchPin,HIGH);
  delay(dt);
}
