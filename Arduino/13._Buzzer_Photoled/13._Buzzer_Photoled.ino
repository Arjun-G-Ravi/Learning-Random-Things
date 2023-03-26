int lightpin=A5;
int buzzpin=6;
int buzztime;
int lval;
float voltage;
int dt=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(2000000);
pinMode(buzzpin,OUTPUT);
pinMode(lightpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lval=analogRead(lightpin);
voltage=(5./1023)*lval;
Serial.print("The voltage across the Photoresistor is ");
Serial.print(voltage);
Serial.println(" V");

buzztime=(940./5.)*voltage + 60;
digitalWrite(buzzpin,HIGH);
delayMicroseconds(buzztime);
digitalWrite(buzzpin,LOW);
delayMicroseconds(buzztime);
}
