String Colour;
int Red =3;
int Blue=5;
int Green=9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
pinMode(Blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Which LED do you want to light up? ");
Serial.println("                   (Type in caps) ");

    while(Serial.available()==0){
  
    }
  Colour=Serial.readString();
  if (Colour=="RED"){
    digitalWrite(Red,HIGH);
    digitalWrite(Green,LOW);
    digitalWrite(Blue,LOW);
  }
  if (Colour=="GREEN"){
    digitalWrite(Red,LOW);
    digitalWrite(Green,HIGH);
    digitalWrite(Blue,LOW);
  }
  if (Colour=="BLUE"){
    digitalWrite(Red,LOW);
    digitalWrite(Green,LOW);
    digitalWrite(Blue,HIGH);
  }  
  if (Colour=="OFF"){
    digitalWrite(Red,LOW);
    digitalWrite(Green,LOW);
    digitalWrite(Blue,LOW);
  }
  if (Colour=="YELLOW"){
    analogWrite(Red,255);
    analogWrite(Green,75);
    analogWrite(Blue,0);
  }
  if (Colour=="CYAN"){
    analogWrite(Red,0);
    analogWrite(Green,255);
    analogWrite(Blue,255);
  }
  if (Colour=="MAGENTA"){
    analogWrite(Red,255);
    analogWrite(Green,0);
    analogWrite(Blue,100);
  }
  if (Colour=="WHITE"){
    analogWrite(Red,255);
    analogWrite(Green,255);
    analogWrite(Blue,255);
  }

}
