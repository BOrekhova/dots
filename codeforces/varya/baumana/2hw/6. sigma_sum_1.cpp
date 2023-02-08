#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 5; i <= 15; i++)
        sum += i * 2;
    std::cout << sum;
}