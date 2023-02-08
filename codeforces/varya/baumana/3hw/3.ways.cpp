#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n) {
    case 12:
        cout << "Tram, 27.5 km";
        break;
    case 17:
        cout << "Taxi, 13.6 km";
        break;
    case 16:
        cout << "Bus, 57.3 km, the max distance";
        break;
    }
}