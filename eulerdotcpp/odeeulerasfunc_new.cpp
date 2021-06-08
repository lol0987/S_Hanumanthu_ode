// odeeulerasfunc_new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

// Consider a differential equation 
// dy/dx=(x + y + xy) 
float func(float x, float y)
{
    return (x * y);
}

// Function for Euler formula 
void euler(float x0, float y, float h, float x)
{
    float temp = -0;

    // Iterating till the point at which we 
    // need approximation 
    while (x0 < x) {
        temp = y;
        y = y + h * func(x0, y);
        x0 = x0 + h;
    }

    // Printing approximation 
    cout << "Approximate solution at x = "
        << x << "  is  " << y << endl;
}

