#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter a number: ";
    int userNum{};
    std::cin >> userNum;
    return userNum;
}

void writeAnswer(int userNum)
{
    std::cout << "result: " << userNum << '\n';
}
