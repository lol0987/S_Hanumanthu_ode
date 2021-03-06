// eulermethod1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream> 
using namespace std;

// Consider a differential equation 
// dy/dx=(x + y + xy) 
float func(float a, float b)
{
    return ((1.56- b)/2.45);
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

// Driver program 
int main()
{
    // Initial Values 
    float x0 = 0;
    float y0 = 1;
    float h = 0.025;

    // Value of x at which we need approximation 
    float x = 0.1;

    euler(x0, y0, h, x);
    return 0;
}
