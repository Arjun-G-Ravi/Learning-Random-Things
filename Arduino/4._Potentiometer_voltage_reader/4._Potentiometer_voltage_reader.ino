int x;

void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,HIGH);
x=analogRead(A0);
Serial.println(x);
delay(300);
}
