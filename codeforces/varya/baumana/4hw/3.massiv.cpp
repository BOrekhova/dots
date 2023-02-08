#include <iostream>

int main()
{

    // a) заполнить массив случайными числами

    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    // b) вывести массив на экран

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // c) обнулить все элементы на главной диагонали

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j)
                arr[i][j] = 0;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}