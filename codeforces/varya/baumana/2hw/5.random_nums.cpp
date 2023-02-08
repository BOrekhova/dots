#include <iomanip>
#include <iostream>
#include <stdlib.h>

int main()
{
    int val_x = rand() % 32001 - 16000;
    int val_y = rand() % 32001 - 16000;
    int val_z = rand() % 32001 - 16000;
    std::cout << std::setw(7) << "x = " << val_x << " ";
    std::cout << std::setw(7) << "y = " << val_y << " ";
    std::cout << std::setw(7) << "y = " << val_z << " ";
}