#include "pch.h"

#include "pch.h"

#include "gtest/gtest.h"
#include <iostream> 
using namespace std;
float lambda;

float func(float x, float lambda)
{
    return (lambda * x);
}

float ode_stability(float y, float x, float lambda)
{
    float x0 = 2;
    float n = 50;
    float h = (x - x0) / n;
    float p = lambda * (h);
    if (p > -2 && p < 0)
        return 1;
    else
        return 0;
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

TEST(ODE_TEST, checkSoln)
{
    EXPECT_EQ(1, euler(1, 2));
    EXPECT_EQ(2, euler(1, 2));
    EXPECT_TRUE(true);
}

TEST(ODE_TEST, Stability)
{
    ASSERT_EQ(1, ode_stability(1, 0,2)) << "soln doesn't lie in stability region";
    ASSERT_EQ(0, ode_stability(1, 0, 2)) << "soln lies in stability region";
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
