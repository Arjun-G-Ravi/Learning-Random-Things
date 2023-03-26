int ledpin=8;
int buttonpin=12;
int buttonread;
int buttonread2;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonread=digitalRead(buttonpin);


while (buttonread==0){                                 //buttonread=0
  digitalWrite(ledpin,HIGH);
  buttonread=digitalRead(buttonpin);
  while (buttonread==1){
      buttonread2=digitalRead(buttonpin);  
      //buttonread=1  buttonread2=1

      while (buttonread2==0){
          digitalWrite(ledpin,LOW);
          buttonread2=digitalRead(buttonpin);
      //buttonread=1  buttonread2=0
          
          while (buttonread2==1){
              buttonread=2; 
              //buttonread=1  buttonread2=1
              buttonread2=2;
              
          }
      }

  }
}

}
