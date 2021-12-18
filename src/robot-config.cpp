#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor leftMotorA = motor(PORT1, ratio18_1, false);
motor leftMotorB = motor(PORT2, ratio18_1, false);
motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB);
motor rightMotorA = motor(PORT3, ratio18_1, true);
motor rightMotorB = motor(PORT4, ratio18_1, true);
motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 40, mm, 1);
motor RightTail = motor(PORT10, ratio36_1, false);
motor BigArm = motor(PORT5, ratio36_1, false);
motor29 R1 = motor29(Brain.ThreeWirePort.A, false);
motor29 B1 = motor29(Brain.ThreeWirePort.B, false);
motor29 Ground1 = motor29(Brain.ThreeWirePort.C, false);
motor29 R2 = motor29(Brain.ThreeWirePort.D, false);
motor29 B2 = motor29(Brain.ThreeWirePort.E, false);
motor29 Ground2 = motor29(Brain.ThreeWirePort.F, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}