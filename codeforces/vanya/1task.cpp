#include <iostream>

class Logger {
private:
    int id = 0;

public:
    Logger(int x)
    { // новый конструктор для инициализации объекта целым числом
        id = x;
        std::cout << "Logger(int): " << this << "\n";
    }

    ~Logger()
    {
        std::cout << "~Logger(): " << this << "\n";
    }
};

void incr(int& x)
{
    x++;
}

int main()
{
    // Logger x1(1);
    // std::cout << "the address of x1 is " << &x1 << " ";
    // Logger x2(2);
    // x2 = x1;
    // std::cout << &x1 << " " << &x2;
    int x = 3;
    incr(x);
    std::cout << x;
}
