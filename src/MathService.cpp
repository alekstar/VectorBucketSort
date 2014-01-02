#include "MathService.h"
#include <cmath>

unsigned int MathService::getDigitOfNumber(unsigned int number, 
                                           unsigned int digit_number)
{
    unsigned int digit = -1;
    digit = int((number % int(pow(10, digit_number))) / 
            pow(10, digit_number - 1));
    return digit;
}
