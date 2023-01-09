int lightPin=A0;
int lightVal;
int dt=250;
int Red=9;
int Green=11;


void setup() {
  // put your setup code here, to run once:
pinMode(lightPin,INPUT);
pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(A0);
Serial.println(lightVal);
delay(dt);

  while(lightVal<900){
    digitalWrite(Red,HIGH);
    digitalWrite(Green,LOW);
    lightVal=analogRead(A0);
  }
  while(lightVal>=900){
    digitalWrite(Red,LOW);
    digitalWrite(Green,HIGH);
    lightVal=analogRead(A0);  
  }
}
