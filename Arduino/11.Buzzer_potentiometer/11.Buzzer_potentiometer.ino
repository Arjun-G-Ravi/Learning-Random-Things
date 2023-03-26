int buzzval;
int pval;
int buzzpin=11;
int ppin=A0;

void setup() {
Serial.begin(9600);
pinMode(buzzpin,OUTPUT);
pinMode(ppin,INPUT);
}

void loop() {
pval=analogRead(ppin);
Serial.print(pval);
Serial.print(" - ");
buzzval=60+(9940./1023.)*pval;
Serial.println(buzzval);
digitalWrite(buzzpin,HIGH);
delayMicroseconds(buzzval);
digitalWrite(buzzpin,LOW);
delayMicroseconds(buzzval);
}
