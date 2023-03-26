int readpin=8;
int switchval;
int ledpin=13;
int dt=250  ;
void setup() {
  // put your setup code here, to run once:
pinMode(readpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
switchval=digitalRead(readpin);
Serial.println(switchval);
while (switchval==1){
 switchval=digitalRead(readpin);
Serial.println(switchval); 
}
if (switchval==0){
  digitalWrite(ledpin,HIGH);
}
while (switchval==0){
 switchval=digitalRead(readpin);
Serial.println(switchval); 
}
while (switchval==1){
 switchval=digitalRead(readpin);
Serial.println(switchval); 
}
if (switchval==0){
  digitalWrite(ledpin,LOW);
}
while (switchval==0){
 switchval=digitalRead(readpin);
Serial.println(switchval); 
}



}
