int SpeedPin=5;
int dir1=4;
int dir2=3;
int motSpeed=200;

void setup() {
  // put your setup code here, to run once:
pinMode(SpeedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(motSpeed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(SpeedPin,motSpeed);
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
}
