int trigPin=12;
int echoPin=11;


void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
delayMicroseconds(10);

float timeTaken=pulseIn(echoPin,HIGH);
float distance=timeTaken*343.*.0001/2;
Serial.print(distance);
Serial.println(" cm");
delay(25);


}
