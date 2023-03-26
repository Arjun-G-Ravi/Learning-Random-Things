int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=500;
byte LEDs=0b10101010;
int Shift=0;    // 0 for rightshift   1 for leftshift


void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
}

void loop() {
  //Serial.println(LEDs,HEX);
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(latchPin,HIGH);
  if (Shift==0){
    LEDs=LEDs/2;
  }
  if (Shift==1){
    LEDs=LEDs*2;
  }
  else{
    LEDs=LEDs;
  }
  delay(dt);
}
