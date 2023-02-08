using namespace std;
#include <iostream>

#define a = 10;

// прототип функции в начале, если пишешь её в конце
// private public protected

class Point {
public:
    int getX()
    {
        return x;
    }

    void setX(int x)
    {
        this->x = x;
    }

    //////////////////////////////

    int getY()
    {
        return y;
    }

    int setY(int y)
    {
        this->y = y;
    }

    //////////////////////////////

    int getZ()
    {
        return z;
    }

    // int setZ(int z) {
    //     this->z = z;
    // }

private:
    int x = 0, y = 0, z = 0;
};

int main()
{
    Point p1;
    p1.setX(10);
    Point p2;
    std::cout << "x: " << p1.getX() << std::endl;
    return 0;
}
