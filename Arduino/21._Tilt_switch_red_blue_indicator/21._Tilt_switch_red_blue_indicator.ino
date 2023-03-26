int redPin=8;
int bluePin=10;
int tiltPin=12;
int tiltVal;

void setup() {
  // put your setup code here, to run once: 
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal=digitalRead(tiltPin);
  //Serial.println(tiltVal);
  if(tiltVal==0){
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,HIGH);
  }
  else{
   digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,LOW); 
  }
}
