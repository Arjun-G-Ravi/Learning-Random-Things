int anaVal;
float V;
int Red=3;
int Blue=6;
int Green=11;


void setup() {
  Serial.begin(9600);
  pinMode(Red,OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);
}
  
void loop() { 
  anaVal=analogRead(A0);
  V=(5./1023.)*anaVal;
  
  Serial.println(V);
  if (V >= 4) {
    digitalWrite(Red,HIGH);
    digitalWrite(Blue,LOW);
    digitalWrite(Green,LOW);
  }
  if (V <= 3) {
    digitalWrite(Red,LOW);
    digitalWrite(Blue,LOW);
    digitalWrite(Green,HIGH);
  }
  if (V > 3 && V < 4) {
    digitalWrite(Red,LOW);
    digitalWrite(Blue,HIGH);
    digitalWrite(Green,LOW);
  }
}
