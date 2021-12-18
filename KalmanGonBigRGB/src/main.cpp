
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\mattj                                            */
/*    Created:      Thu Sep 23 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// RightTail            motor         10              
// BigArm               motor         5               
// R1                   motor29       A               
// G1                   motor29       B               
// B1                   motor29       C               
// Ground1              motor29       D               
// Motor393E            motor29       E               
// Motor393F            motor29       F               
// Motor393G            motor29       G               
// Motor393H            motor29       H               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <iostream>

using namespace vex;
using code = vision::code;

controller Controller;
competition Competition;
brain brain;

motor LeftFrontMotor = motor(PORT1, ratio18_1,false);
motor LeftRearMotor = motor(PORT2, ratio18_1,false);
motor RightFrontMotor = motor(PORT3, ratio18_1,false);
motor RightRearMotor = motor(PORT4, ratio18_1,false);

drivetrain LeftTrain = drivetrain(LeftFrontMotor, LeftRearMotor);
drivetrain RightTrain = drivetrain(RightFrontMotor, RightRearMotor);
drivetrain TailTrain = drivetrain(RightTail, RightTail);

int a = 1;
void toggleP1(){
  if (a == 1) {
    B1.spin(forward);
    R1.spin(forward);
    R2.spin(forward);
    B2.spin(forward);
   a = 0;
  }
  else {
    B1.stop();
    R1.stop();
    B2.stop();
    R2.stop();
   a = 1;
  }
}
void toggleR1(){
  if (a == 1) {
    R1.spin(forward);
    R2.spin(forward);
   a = 0;
  }
  else {
    B1.stop();
    R1.stop();
    B2.stop();
    R2.stop();
   a = 1;
  }
}

void toggleB1(){
  if (a == 1) {
    B1.spin(forward);
    B2.spin(forward);
   a = 0;
  }
  else {
    B1.stop();
    R1.stop();
    B2.stop();
    R2.stop();
   a = 1;
  }
}


void autonomous(void){   //Automatic driving
LeftTrain.driveFor(directionType::fwd, 30, distanceUnits::in, 72, velocityUnits::pct, false);
RightTrain.driveFor(directionType::fwd, 30, distanceUnits::in, 72, velocityUnits::pct);
vex::task::sleep(100); //Gas Gas Gas
}

void userController(void) {
 R1.setVelocity(50, pct);
 B1.setVelocity(50, pct);
 

 int x = Controller.Axis4.value();
 int y = Controller.Axis3.value();

 int xy = (y + x);
 int yx = (y - x);
 int i = 0;

 LeftFrontMotor.spin(directionType::fwd, (xy), percentUnits::pct);
 LeftRearMotor.spin(directionType::fwd, (xy), percentUnits::pct);
 RightFrontMotor.spin(directionType::fwd, (yx), percentUnits::pct);
 RightRearMotor.spin(directionType::fwd, (yx), percentUnits::pct);
 R1.spin(directionType::fwd, (yx), percentUnits::pct);
 B1.spin(directionType::fwd, (yx), percentUnits::pct);
 R2.spin(directionType::fwd, (yx), percentUnits::pct);
 B2.spin(directionType::fwd, (yx), percentUnits::pct);
 Ground1.spin(directionType::fwd, (yx), percentUnits::pct);
 Ground2.spin(directionType::fwd, (yx), percentUnits::pct);

Controller.ButtonDown.pressed(toggleP1);
Controller.ButtonLeft.pressed(toggleB1);
Controller.ButtonRight.pressed(toggleR1);

 
 if( Controller.ButtonR2.pressing()){ //up
RightTail.spin(directionType::rev, 100, velocityUnits::pct);
}
else if( Controller.ButtonR1.pressing()){ //down
RightTail.spin(directionType::fwd, 100, velocityUnits::pct);
}
else if( Controller.ButtonL2.pressing()){ //up
BigArm.spin(directionType::rev, 100, velocityUnits::pct);
}
else if( Controller.ButtonL1.pressing()){ //down
BigArm.spin(directionType::fwd, 100, velocityUnits::pct);
}
else {
RightTail.stop(brakeType::brake);
BigArm.stop(brakeType::brake);
}

/*if( Controller.ButtonDown.pressed(void){ 
  i=1;
}*/
/*else if( Controller.ButtonLeft.pressed()){ 
  i=2;
}
else if( Controller.ButtonRight.pressed()){
  i=3;
}*/

/*void purpleC(){
B1.spin(directionType::fwd, 100, velocityUnits::pct);
R1.spin(directionType::fwd, 100, velocityUnits::pct);
Ground1.spin(directionType::fwd, 100, velocityUnits::pct);
return;
}
void blueC(){
B1.spin(directionType::fwd, 100, velocityUnits::pct);
Ground1.spin(directionType::fwd, 100, velocityUnits::pct);*/

























 vex::task::sleep(100);
} 


int main() {
 Competition.drivercontrol(userController);
 //Controller.ButtonDown.pressed(purpleC);
 while (true){
 wait(100, msec);
 }

}


