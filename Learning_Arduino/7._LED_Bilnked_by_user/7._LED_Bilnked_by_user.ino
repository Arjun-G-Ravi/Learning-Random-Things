int myNumber;
int i;
void setup() {
  
Serial.begin(9600);
pinMode(12,OUTPUT);
}

void loop() {

  Serial.println("How many blinks? ");
    while (Serial.available() == 0){

    }
myNumber=Serial.parseInt();
Serial.print("So you want ");
Serial.print(myNumber);
Serial.println(" blinks.");
Serial.println("Okay...");

  i=1;
  while (i<= myNumber){
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(500); 
    i=i+1; 
  }
  
Serial.print("B-O-O-M");
delay(1000);
Serial.println();
}
