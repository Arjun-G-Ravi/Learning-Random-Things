int ar;
float V;

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(2000000);
}

void loop() {
  // put your main code here, to run repeatedly:
ar=analogRead(A0);
V=(5./1023.)*ar;
Serial.println(V);
delay(250);
}
