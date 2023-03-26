

#include <LiquidCrystal.h>

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

float num1;
float num2;
String sign;
float ans;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("  -CALCULATOR-");
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("Enter 1st number");
  while (Serial.available()==0){
  }
  num1=Serial.parseFloat();
  lcd.setCursor(0,1);
  lcd.print(num1);
  delay(1000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Enter 2st number");
  while (Serial.available()==0){
  }
  num2=Serial.parseFloat();
  lcd.setCursor(0,1);
  lcd.print(num2);
  delay(1000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Enter operator:");
  while (Serial.available()==0){
  }
  sign=Serial.readString();
  lcd.setCursor(0,1);
  lcd.print(sign);
  delay(1000);
  lcd.clear();
  
  if (sign=="+"){
    ans=num1+num2;
  }
  if (sign=="-"){
    ans=num1-num2;
  }
  if (sign=="*"){
    ans=num1*num2;
  }
  if (sign=="/"){
    ans=num1/num2;
  }
  delay(1000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print(num1);
  lcd.print(' ');
  lcd.print(sign);
  lcd.print(" ");
  lcd.print(num2);
  lcd.print(" = ");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print(ans);
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("  Thank You :)");
  delay(1000);
  lcd.clear();
  delay(1000);
  
}
