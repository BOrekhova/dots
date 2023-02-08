#include <iostream>

int foo(int a = 10, int b = 10) { return a + b; }

int main()
{
    std::cout << foo();
    return 0;
}

// a) функцию можно вызвать.
// б) если мы не введём не присвоим ей никакие новые переменные, она вернёт нам 20.