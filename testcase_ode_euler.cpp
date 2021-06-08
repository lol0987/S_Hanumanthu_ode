#include "pch.h"

#include "gtest/gtest.h"
#include <iostream> 
using namespace std;
float func(float x, float y)
{
    return (x * y);
}

float euler(float y, float x)
{
    float x0 = 2;
    float n = 50;
    float h = (x - x0) / n;
    float temp = -0;
    while (x0 < x) {
        temp = y;
        y = y + h * func(x0, y);
        x0 = x0 + h;
    }
    cout << "Approximate solution at x = "
        << x << "  is  " << y << endl;
    return y;
}


TEST(ODETEST, checkSoln)
{
    EXPECT_EQ(1, euler(1, 2));
    EXPECT_EQ(2, euler(1, 2));
    EXPECT_TRUE(true);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}