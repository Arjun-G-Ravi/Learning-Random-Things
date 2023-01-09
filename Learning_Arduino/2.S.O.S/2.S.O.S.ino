int Red=13;
int st=150;
int lt=550;

void setup() {
  // put your setup code here, to run once:
pinMode(Red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(Red,HIGH);
delay(st);
digitalWrite(Red,LOW);
delay(st);
digitalWrite(Red,HIGH);
delay(st);
digitalWrite(Red,LOW);
delay(st);
digitalWrite(Red,HIGH);
delay(st);
digitalWrite(Red,LOW);
delay(lt);


digitalWrite(Red,HIGH);
delay(lt);
digitalWrite(Red,LOW);
delay(lt);
digitalWrite(Red,HIGH);
delay(lt);
digitalWrite(Red,LOW);
delay(lt);
digitalWrite(Red,HIGH);
delay(lt);
digitalWrite(Red,LOW);
delay(lt);


digitalWrite(Red,HIGH);
delay(st);
digitalWrite(Red,LOW);
delay(st);
digitalWrite(Red,HIGH);
delay(st);
digitalWrite(Red,LOW);
delay(st);
digitalWrite(Red,HIGH);
delay(st);
digitalWrite(Red,LOW);
delay(st);
delay(1000);
}
