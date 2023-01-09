#include <Stepper.h>

int StepsPerRevolution=2048;
int motSpeed=10;
int dt=100 ;

Stepper myStepper(StepsPerRevolution, 8,10,9,11);
void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed);

}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(StepsPerRevolution);
  delay(dt);
  myStepper.step(-StepsPerRevolution);
  delay(dt);
}
