#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 5; i <= 10; i++)
        sum += i * i;
    std::cout << sum;
}