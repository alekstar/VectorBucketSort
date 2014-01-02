#include <gtest/gtest.h>
#include "src/MathService.h"

TEST(MathService, GetFirstDigitOfNumber197)
{
    const unsigned int number = 197;
    EXPECT_EQ(7, MathService::getDigitOfNumber(number, 1));
}

TEST(MathService, GetSecondDigitOfNumber197)
{
    const unsigned int number = 197;
    EXPECT_EQ(9, MathService::getDigitOfNumber(number, 2));
}

TEST(MathService, GetThirdDigitOfNumber197)
{
    const unsigned int number = 197;
    EXPECT_EQ(1, MathService::getDigitOfNumber(number, 3));
}

TEST(MathService, GetFourthDigitOfNumber197)
{
    const unsigned int number = 197;
    EXPECT_EQ(0, MathService::getDigitOfNumber(number, 4));
}

TEST(MathService, GetFifthDigitOfNumber197)
{
    const unsigned int number = 197;
    EXPECT_EQ(0, MathService::getDigitOfNumber(number, 5));
}

TEST(MathService, GetSecondDigitOfNumber7)
{
    const unsigned int number = 7;
    EXPECT_EQ(0, MathService::getDigitOfNumber(number, 2));
}        

TEST(MathService, GetDigitOfNumberWithWrongArguments)
{
    const unsigned int number = -7;
    EXPECT_EQ(0, MathService::getDigitOfNumber(number, -1));
} 

TEST(MathService, GetFirstDigitOfNumber222)
{
    const unsigned int number = 222;
    EXPECT_EQ(2, MathService::getDigitOfNumber(number, 1));
}
