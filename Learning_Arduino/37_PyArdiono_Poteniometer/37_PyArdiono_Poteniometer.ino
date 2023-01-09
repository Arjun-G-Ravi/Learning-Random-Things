int dt=100;
int pPin=A5;
float voltage;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage=analogRead(pPin);
  voltage=voltage*(5./1023);
  Serial.println(voltage);
  delayMicroseconds(dt);
}
