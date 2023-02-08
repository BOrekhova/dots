#include <iostream>

int main()
{
    int a, b, result;
    char action;
    std::cout << "Enter two integer numbers:";
    std::cin >> a >> b;
    std::cout << "Enter the arithemtic action:";
    std::cin >> action;

    switch (action) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    }
    std::cout << result;
}
