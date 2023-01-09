String cmd;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() == 0){
    
  }
  cmd = Serial.readStringUntil('\r');
  if (cmd == "1"){
    digitalWrite(13,HIGH);
    Serial.println(cmd);
  }
  if (cmd == "0"){
    digitalWrite(13,LOW);
    Serial.println(cmd);

    
  }

}
