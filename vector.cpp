#pragma once

#include <cmath>
#include <Windows.h>
#include <cstdint>

float pi = 3.14159;
float maxAngleH = 180;
float maxAngleV = 89;



struct vector3
{
  //initialize coordinates
uintptr_t x, y, z;
  
//overloads for formula here:
float x2, y2, z2; //for mathematical purposes
  uintptr_t alt(x2, y2, z2) = 0;
  
  float x = (x - x2, y - y2, z -z2);
  float y = (x + x2, y + y2, z + z2);
  float z = (x * x2, y * y2, z * z2);
  
  //end overloads
  
float vector3d, magnitude;
//re-initialize vector3d and initialize magnitude
  
magnitude = sqrt(x^2 + y^2 + z^2);
//calculate magnitude 
return 0;
};
