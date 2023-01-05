#include <iostream>
using namespace std;

int main()
{
    int num, column, row;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> num >> ' ';
            if (num == 1) {
                column = j, row = i;
            }
        }
        cin >> endl;
    }
    cout << abs(3 - column) + abs(3 - column);
}