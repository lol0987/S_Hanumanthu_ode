//test cases addition and subtraction.


#include "pch.h"

#include "gtest/gtest.h"
int add(int a, int b)
{
	return (a + b);

}
int sub(int a, int b)
{
	return (a - b);
}
TEST(TestCaseName, TestName)
{
	EXPECT_EQ(2, add(1, 1));
	EXPECT_EQ(3, add(1, 1));
	EXPECT_EQ(0, sub(1, 1));
	EXPECT_EQ(3, sub(1, 1));
	EXPECT_TRUE(true);
}
int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}