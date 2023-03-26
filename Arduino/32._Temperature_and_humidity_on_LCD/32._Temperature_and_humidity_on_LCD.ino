#include <LiquidCrystal.h>
#include <DHT.h>
#define Type DHT11

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

int sensePin=2;
float humidity;
float tempC;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
DHT sensor(sensePin,Type);

int dt=3000;
int dt2=100;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
sensor.begin();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=sensor.readHumidity();
tempC=sensor.readTemperature();
lcd.setCursor(0,0);
lcd.print("Temperature: ");
lcd.setCursor(9,1);
lcd.print(tempC);
lcd.print(" C");
delay(dt);
lcd.clear();
delay(dt2);

lcd.setCursor(0,0);
lcd.print("Humidity: ");
lcd.setCursor(9,1);
lcd.print(humidity);
lcd.print(" %");
delay(dt);
lcd.clear();
delay(dt2);
}
