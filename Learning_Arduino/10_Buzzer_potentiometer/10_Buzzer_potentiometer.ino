int buzzer=9;
int potenz=A5;
int pval;
int V;
int dt=500;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
pinMode(potenz,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
pval=analogRead(potenz);
Serial.println(pval);
delay(dt);

if(pval > 1000){
  digitalWrite(buzzer,HIGH);
}
if(pval <= 1000){
  digitalWrite(buzzer,LOW);
}
}
