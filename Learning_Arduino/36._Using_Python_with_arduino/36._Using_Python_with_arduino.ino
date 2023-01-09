int dt=1000;
int ct=0;
void setup() {
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(ct);
  ct++;
  delay(dt);
}
