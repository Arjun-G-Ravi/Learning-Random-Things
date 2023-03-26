int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=500;
byte LEDs=0b00000000;
int Shift=1;    // 0 for rightCircularShift   1 for leftCircularShift


void setup() {
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void loop() {
  //Serial.println(LEDs,HEX);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);
  if (Shift==0){  //rightCircularShift
    LEDs=LEDs*128+LEDs/2;
  }
  if (Shift==1){  //leftCircularShift
    LEDs=LEDs/128+LEDs*2;
  }
  else{
    LEDs=LEDs;
  }
  delay(dt);
}
