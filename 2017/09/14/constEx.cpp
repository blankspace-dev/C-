#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;
public :
    Point (int _x = 0, int _y = 0) : x(_x), y(_y) { }
    int getX() const { return x; } // const function
    int getY() const { return y; } // const function

    void setX(int _x) { x = _x; }
    void setY(int _y) { y = _y; }

    void printXY() const; // const function
};

int main()
{
    const Point p1(0, 0);
    Point p2(2, 5);

    p1.printXY();
    p2.printXY();

    cout << "p1: " << p1.getX() << ',' << p1.getY() << endl;
    cout << "p2: " << p2.getX() << ',' << p2.getY() << endl;

    p1.setX(5);
    p1.setY(15);
    p2.setX(10);
    p2.setY(20);

    return 0;
}
