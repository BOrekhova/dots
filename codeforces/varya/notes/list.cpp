
#include <iostream>
#include <list>
#include <vector>

template <class T>
class Point {
public:
    T x;
    T y;
};

template <class T>
std::string getType(T val)
{
    return typeid(val).name();
}

int main()
{
    std::list<int> v1;
    v1.push_back(20);
    v1.push_back(30);
    v1.push_front(10);
    v1.push_back(30);
    v1.push_back(30);

    v1.unique(); // оставляет только уникальные значение, которые идёт подряд

    v1.sort(); // сортирует от меньшего к большему

    Point<int> p1;
    Point<float> p2;
    std::cout << "Type of data: " << typeid(p1.x).name() << std::endl; // print int
    std::cout << "Type of data: " << typeid(p2.x).name() << std::endl; // print float

    int a = 0;
    float b = 0;

    std::cout << getType<int>(a) << std::endl;
    std::cout << getType<float>(b) << std::endl;

    for (std::list<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        std::cout << *it << std::endl;
    } // работает с любым контейнером
}
