int pin1=2;
int pin2=3;
int pin3=4;
int pin4=6;
int pin5=7;

int dt=750;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,LOW); //START
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(50);
  digitalWrite(pin1,HIGH); //START
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(50);
  digitalWrite(pin1,LOW); //START
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(50);
  digitalWrite(pin1,HIGH); //START
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(50);
  digitalWrite(pin1,LOW); //START
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(50);
  digitalWrite(pin1,HIGH); //START
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(1000);

  
  digitalWrite(pin1,LOW); //00
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);

  digitalWrite(pin1,LOW); //01
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW); //02
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,LOW); //03
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW); //04
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,LOW); //05
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW); //06
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,LOW); //07
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW); //08
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,LOW); //09
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW); //10
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,LOW); //11
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW); //12
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,LOW); //13
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW); //14
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,LOW); //15
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //16
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //17
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //18
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //19
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //20
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //21
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //22
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //23
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //24
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //25
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //26
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //27
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //28
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //29
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //30
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH); //31
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(1000);
  
  
  

}
