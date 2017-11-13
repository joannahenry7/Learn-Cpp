#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int nValue)
{
    std::cout << "The answer is " << nValue;
}
