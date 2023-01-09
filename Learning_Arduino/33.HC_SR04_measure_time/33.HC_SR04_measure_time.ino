int trigPin=12;
int echoPin=11;
int dt=10;
float timeTaken;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(dt);
digitalWrite(trigPin,HIGH);
delayMicroseconds(dt);
digitalWrite(trigPin,LOW);
timeTaken=pulseIn(echoPin,HIGH);
Serial.println(timeTaken);

delay(20);
}
