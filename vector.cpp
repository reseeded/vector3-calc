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


    float x = (x - x2, y - y2, z - z2);
    float y = (x + x2, y + y2, z + z2);
    float z = (x * x2, y * y2, z * z2);

    //end overloads
 
    float vector3d, magnitude;
    //re-initialize vector3d and initialize magnitude
    
    float magnitude = sqrt(x ^ 2 + y ^ 2 + z ^ 2);
    //calculate magnitude 
    
};

using namespace std;

int main()
{
    std::cout << "Initialized\n";
    
    return 0;
}
