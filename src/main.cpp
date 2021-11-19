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
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

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

void autonomous(void){   //Automatic driving
LeftTrain.driveFor(directionType::fwd, 30, distanceUnits::in, 100, velocityUnits::pct, false);
RightTrain.driveFor(directionType::fwd, 30, distanceUnits::in, 100, velocityUnits::pct);
vex::task::sleep(100); //Gas Gas Gas
}

void userController(void) {
  while (1) {

 int x = Controller.Axis4.value();
 int y = Controller.Axis3.value();

 int xy = (y + x);
 int yx = (y - x);

 LeftFrontMotor.spin(directionType::fwd, (xy), percentUnits::pct);
 LeftRearMotor.spin(directionType::fwd, (xy), percentUnits::pct);
 RightFrontMotor.spin(directionType::fwd, (yx), percentUnits::pct);
 RightRearMotor.spin(directionType::fwd, (yx), percentUnits::pct);
 
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
 vex::task::sleep(100);
 } 
}

int main() {
 Competition.drivercontrol(userController);
 while (true){
 wait(100, msec);
 }

}


