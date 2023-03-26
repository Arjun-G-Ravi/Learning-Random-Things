int ledPin=9;
int plusButton=4;
int minusButton=6;
int plusVal;
int minusVal;
int brightness=0;
int change=10;
int dt=50;
int buzzPin = 11;
int buzzTime=100;
int perBright;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(buzzPin,OUTPUT);
pinMode(plusButton,INPUT);
pinMode(minusButton,INPUT);
Serial.begin(2000000);
}

void loop() {
  // put your main code here, to run repeatedly:
plusVal=digitalRead(plusButton);

minusVal=digitalRead(minusButton);
perBright=brightness*(100./255.);
Serial.print("Positive:");
Serial.print(plusVal);
Serial.print("   Negative:");
Serial.print(minusVal);
Serial.print("   Brightness:");
Serial.print(perBright);
Serial.println("%");

analogWrite(ledPin,brightness);
if(brightness > 10  &&  brightness < 245){
  if(plusVal==0){
    brightness = brightness + change;
  }
  if(minusVal==0){
    brightness = brightness - change;
  }
  
}
if(brightness<=10){
  if(minusVal==0){
    brightness = 0;
    analogWrite(ledPin,brightness);
  }
  if(plusVal==0){
    brightness = brightness + change;
  }
}
if(brightness>=245){
  if(plusVal==0){
    brightness = 255;
    analogWrite(ledPin,brightness);

  }
  if(minusVal==0){
    brightness = brightness - change;
  }
}
if(brightness==255){
  if(plusVal==0){
    delay(buzzTime);
    digitalWrite(buzzPin,HIGH);
    delay(buzzTime);
    digitalWrite(buzzPin,LOW);
  }
}

if(brightness==0){
  if(minusVal==0){
    delay(buzzTime);
    digitalWrite(buzzPin,HIGH);
    delay(buzzTime);
    digitalWrite(buzzPin,LOW);
  }
}
delay(dt);
}
