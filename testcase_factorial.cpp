#include "pch.h"
#include "gtest/gtest.h"
#include <iostream>
using namespace std;
int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

TEST(FactorialTest, HandlesZeroInput)
{
	EXPECT_EQ(1, Factorial(0));
	EXPECT_TRUE(true);
}
TEST(FactorialTest, HandlesPositiveInput)
{
	EXPECT_EQ(0, Factorial(1));
	EXPECT_EQ(2, Factorial(2));
	EXPECT_EQ(6, Factorial(3));
	EXPECT_EQ(40320, Factorial(8));
	EXPECT_TRUE(true);
}
int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}