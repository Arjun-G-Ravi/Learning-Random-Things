#include <DHT.h>
#define Type DHT11

int sensePin=2;
float humidity;
float tempC;
float tempF;

DHT senser(sensePin,Type);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
senser.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=senser.readHumidity();
tempC=senser.readTemperature();
tempF=senser.readTemperature(true);

Serial.print("Humidity is: ");
Serial.print(humidity);
Serial.print("   Temperature is: ");
Serial.print(tempC);
Serial.print(" C   ");
Serial.print(tempF);
Serial.println(" F");
delay(1000);
}
