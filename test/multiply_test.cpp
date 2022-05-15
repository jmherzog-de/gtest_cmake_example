#include <multiply/multiply.hpp>
#include <gtest/gtest.h>

TEST(MultiPlyTests, TestIntegerOne_One)
{
    const int expected = 1;
    const int actual = multiply(1, 1);
    ASSERT_EQ(expected, actual);
}

int main(int argc, char** argv)
{

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}