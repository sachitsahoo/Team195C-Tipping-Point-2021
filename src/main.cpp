/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\mattj                                            */
/*    Created:      Sat Oct 30 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
competition Competition;
brain brain;

using namespace vex;
void makePixel(int coordX, int coordY)
{
  int i = 0;
  int owesome = 0;
  while (i < 16)
  {

    while (owesome < 16)
    {
      Brain.Screen.drawPixel(coordX + owesome, coordY + i);
      owesome++;
    }
    i++;
    owesome = 0;
    
  }
}

void makeTopHalf(int coordX, int coordY)
{
  int i = 0;
  int owesome = 0;
  while (i < 8)
  {

    while (owesome < 16)
    {
      Brain.Screen.drawPixel(coordX + owesome, coordY + i);
      owesome++;
    }
    i++;
    owesome = 0;
    
  }
}

void makeBottomHalf(int coordX, int coordY)
{
  int i = 8;
  int owesome = 0;
  while (i < 16)
  {

    while (owesome < 16)
    {
      Brain.Screen.drawPixel(coordX + owesome, coordY + i);
      owesome++;
    }
    i++;
    owesome = 0;
    
  }
}

void trollFace(void){
  // Code for generating troll face on brain
  //  Aspect Ratio: 480 x 240
  makeBottomHalf(80, 0);
  makeBottomHalf(96, 0);
  makeBottomHalf(112, 0);
  makeBottomHalf(128, 0);
  makePixel(144, 0);
  makePixel(160, 0);
  makePixel(176, 0);
  makePixel(192, 0);
  makePixel(208, 0);
  makePixel(224, 0);
  makePixel(240, 0);
  makePixel(256, 0);
  makeBottomHalf(272, 0);
  makeBottomHalf(288, 0);
  makeBottomHalf(304, 0);
  makeBottomHalf(320, 0);
  makeBottomHalf(336, 0);
  makeBottomHalf(352, 0);
  makePixel(80, 16);
  makeTopHalf(368, 16);
  makeTopHalf(384, 16);
  makeTopHalf(400, 16);
  makeBottomHalf(416, 16);
  makePixel(64, 32);
  makePixel(432, 32);
  makePixel(48, 48);
  makeBottomHalf(160, 48);
  makePixel(176, 48);
  makePixel(192, 48);
  makeTopHalf(208, 48);
  makeBottomHalf(224, 48);
  makeBottomHalf(240, 48);
  makeBottomHalf(336, 48);
  makeBottomHalf(352, 48);
  makeBottomHalf(368, 48);
  makePixel(448, 48);
  makeBottomHalf(16, 64);
  makeTopHalf(32, 64);
  makeBottomHalf(64, 64);
  makeBottomHalf(80, 64);
  makeBottomHalf(96, 64);
  makePixel(144, 64);
  makeTopHalf(160, 64);
  makeTopHalf(176, 64);
  makeTopHalf(192, 64);
  makeTopHalf(208, 64);
  makeBottomHalf(224, 64);
  makeBottomHalf(240, 64);
  makePixel(256, 64);
  makePixel(320, 64);
  makePixel(336, 64);
  makeBottomHalf(352, 64);
  makeBottomHalf(368, 64);
  makePixel(384, 64);
  makePixel(464, 64);
  makePixel(0, 80);
  makePixel(48, 80);
  makeBottomHalf(80, 80);
  makeTopHalf(112, 80);
  makeBottomHalf(128, 80);
  makeBottomHalf(144, 80);
  makeBottomHalf(160, 80);
  makeTopHalf(176, 80);
  makePixel(320, 80);
  makePixel(480, 80);
  makePixel(0, 96);
  makePixel(48, 96);
  makePixel(80, 96);
  makeTopHalf(96, 96);
  makeBottomHalf(112, 96);
  makeBottomHalf(128, 96);
  makePixel(224, 96);
  makePixel(240, 96);
  makeTopHalf(320, 96);
  makeBottomHalf(336, 96);
  makeBottomHalf(384, 96);
  makeTopHalf(400, 96);
  makeTopHalf(416, 96);
  makeTopHalf(432, 96);
  makeBottomHalf(448, 96);
  makePixel(480, 96);
  makePixel(16, 112);
  makeTopHalf(48, 112);
  makeBottomHalf(64, 112);
  makePixel(96, 112);
  makeBottomHalf(112, 112);
  makeBottomHalf(128, 112);
  makePixel(144, 112);
  makeTopHalf(160, 112);
  makeBottomHalf(176, 112);
  makeBottomHalf(192, 112);
  makeTopHalf(224, 112);
  makeTopHalf(256, 112);
  makeTopHalf(272, 112);
  makeBottomHalf(304, 112);
  makeBottomHalf(320, 112);
  makeTopHalf(336, 112);
  makePixel(416, 112);
  makePixel(464, 112);
  makePixel(32, 128);
  makeTopHalf(96, 128);
  makeBottomHalf(112, 128);
  makeTopHalf(128, 128);
  makePixel(144, 128);
  makeBottomHalf(160, 128);
  makeBottomHalf(176, 128);
  makePixel(208, 128);
  makeTopHalf(224, 128);
  makeTopHalf(240, 128);
  makeTopHalf(256, 128);
  makeBottomHalf(272, 128);
  makeBottomHalf(288, 128);
  makeBottomHalf(304, 128);
  makeBottomHalf(320, 128);
  makeTopHalf(336, 128);
  makeTopHalf(352, 128);
  makePixel(368, 128);
  makeTopHalf(384, 128);
  makePixel(400, 128);
  makePixel(416, 128);
  makePixel(448, 128);
  makePixel(48, 144);
  makePixel(128, 144);
  makePixel(144, 144);
  makeTopHalf(192, 144);
  makePixel(208, 144);
  makeBottomHalf(224, 144);
  makeBottomHalf(240, 144);
  makeBottomHalf(256, 144);
  makePixel(272, 144);
  makeBottomHalf(288, 144);
  makeBottomHalf(304, 144);
  makePixel(320, 144);
  makeBottomHalf(336, 144);
  makePixel(352, 144);
  makePixel(368, 144);
  makePixel(384, 144);
  makePixel(400, 144);
  makePixel(432, 144);
  makePixel(64, 160);
  makeTopHalf(144, 160);
  makeTopHalf(160, 160);
  makeBottomHalf(176, 160);
  makePixel(208, 160);
  makePixel(272, 160);
  makePixel(304, 160);
  makeTopHalf(320, 160);
  makePixel(336, 160);
  makePixel(352, 160);
  makePixel(368, 160);
  makePixel(384, 160);
  makePixel(400, 160);
  makePixel(416, 160);
  makePixel(448, 160);
  makeTopHalf(80, 176);
  makeBottomHalf(96, 176);
  makeTopHalf(192, 176);
  makeTopHalf(208, 176);
  makeBottomHalf(224, 176);
  makeBottomHalf(240, 176);
  makeBottomHalf(256, 176);
  makePixel(272, 176);
  makeBottomHalf(288, 176);
  makePixel(304, 176);
  makeBottomHalf(320, 176);
  makeTopHalf(336, 176);
  makeBottomHalf(352, 176);
  makePixel(368, 176);
  makeBottomHalf(384, 176);
  makeTopHalf(400, 176);
  makePixel(448, 176);
  makeTopHalf(112, 192);
  makeBottomHalf(128, 192);
  makeBottomHalf(144, 192);
  makePixel(464, 192);
  makeTopHalf(160, 208);
  makeTopHalf(176, 208);
  makeBottomHalf(192, 208);
  makeBottomHalf(208, 208);
  makeTopHalf(464, 208);
  makeTopHalf(224, 224);
  makeBottomHalf(240, 224);
  makeBottomHalf(256, 224);
  makeBottomHalf(272, 224);
  makeBottomHalf(288, 224);
  makeBottomHalf(304, 224);
  makePixel(448, 224);
  makeBottomHalf(320, 224);
  makeBottomHalf(336, 224);
  makeBottomHalf(352, 224);
  makeBottomHalf(368, 224);
  makeBottomHalf(384, 224);
  makeBottomHalf(400, 224);
  makeBottomHalf(416, 224);
  makeBottomHalf(432, 224);

}
int main() {
   Competition.drivercontrol(trollFace);

  
}
