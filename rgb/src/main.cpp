/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\bkalw                                            */
/*    Created:      Sat Dec 11 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// R1                   digital_out   A               
// G1                   digital_out   B               
// B1                   digital_out   C               
// Ground1              digital_out   D               
// R2                   digital_out   E               
// G2                   digital_out   F               
// B2                   digital_out   G               
// Ground2              digital_out   H               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  R1.set(true);
  B1.set(true);
  G1.set(false);
  Ground1.set(true);
  
}

/*int drivercontrol(){

}*/


