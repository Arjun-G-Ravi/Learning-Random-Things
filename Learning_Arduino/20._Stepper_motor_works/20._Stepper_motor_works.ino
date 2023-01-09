#include <Stepper.h>
int StepsPerRevolution=2048;

Stepper myStepper(StepsPerRevolution,8,10,9,11);


void setup() {
  // put your setup code here, to run once:
myStepper.setSpeed(5);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(StepsPerRevolution);
}
