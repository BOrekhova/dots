#include <iostream>

int main()
{
    int a, b;
    char action;
    std::cout << "Enter two integer numbers:";
    std::cin >> a >> b;
    std::cout << "Enter the arithemtic action:";
    std::cin >> action;

    switch (action) {
    case '+':
        std::cout << a + b;
        break;
    case '-':
        std::cout << a - b;
        break;
    case '*':
        std::cout << a * b;
        break;
    case '/':
        std::cout << a / b;
    }
}
