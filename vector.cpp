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

    float x2, y2, z2 = 0.0f; //alternative variables for vector calculation


    uintptr_t ix = (x - x2, y - y2, z - z2);
    uintptr_t iy = (x + x2, y + y2, z + z2);
    uintptr_t iz = (x * x2, y * y2, z * z2);

    //end overloads
 
    float vector3d;
    //re-initialize vector3d and initialize magnitude
    
    float magnitude = sqrt(x^2 + y^2 + z^2);
    //calculate magnitude 
    
};

using namespace std;

int main()
{
    std::cout << "Initialized\n";
    
    return 0;
}
