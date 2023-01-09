#include <LiquidCrystal.h>

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("      -        ");
delay(250);
lcd.setCursor(0,0);
lcd.print("I am inevitable");
delay(2500);
lcd.setCursor(0,1);
lcd.print("And...");
delay(2000);
lcd.setCursor(0,1);
lcd.print("I        ");
delay(1000);
lcd.setCursor(0,1);
lcd.print("I am");
delay(1000);
lcd.setCursor(0,1);
lcd.print("I am ironman !");
delay(2000);
lcd.setCursor(0,1);
lcd.print("    'SNAPS'       ");
delay(100);
lcd.setCursor(0,1);
lcd.print(" ");
lcd.setCursor(0,0);
lcd.print("I am inevitable");
delay(200);
lcd.setCursor(0,0);
lcd.print("I am inevitable");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am inevitabl ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am inevitab   ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am inevita    ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am inevit      ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am inevi            ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am inev               ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am ine                     ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am in                   ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am i                    ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I am                       ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I a                   ");
delay(100);
lcd.setCursor(0,0);
lcd.print("I                        ");
delay(100);
lcd.setCursor(0,0);
lcd.print("                        ");
delay(250);
lcd.clear();
delay(3000);

}
