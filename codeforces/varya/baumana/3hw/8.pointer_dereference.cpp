// Оператор разыменования (*) позволяет получить значение по указанному адресу

#include <iostream>

int main()
{
    int a = 10;
    int* ptr = &a;
    std::cout << *ptr;
}