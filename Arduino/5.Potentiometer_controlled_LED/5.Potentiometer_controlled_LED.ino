int LEDval;
int POTval;

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(A5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

POTval=analogRead(A5);
LEDval=(255./1023.)*POTval;
analogWrite(3,LEDval);

}
