#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <vector>

class Point {
private:
    int x = 0, y = 0;

public:
    int getX() { return x; }
    void setX(int x) { this->x = x; }

    int getY() { return y; }
    void setY(int y) { this->y = y; }
};

int main()
{
    std::vector<Point> points;
    for (int i = 0; i < 10000; i++) {
        Point p;
        p.setX(rand() % 1600 - 800);
        p.setY(rand() % 1600 - 800);
        points.push_back(p);
    }

    for (int i = 0; i < points.size(); i++) {
        int x = points[i].getX();
        int y = points[i].getY();
        printf("%5d %5d", x, y);
    }
}
