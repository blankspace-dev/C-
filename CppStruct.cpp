#include <iostream>

#define SPEED_MIN 0
#define SPEED_MAX 99

using namespace std;

enum
{
    small = 0,
    big,
    flower,
    star,
    fly
};


struct Mario
{
    enum
    {
	down  = -10,
	up    = 10,
    };
    int age;	    ///<
    char status;    ///<마리오의 상태.
    int speed;	    ///<
    void speedAccel(bool upAndDown);
    void printMarioStatus();
};

void Mario::speedAccel(bool upAndDown)
{
    if (upAndDown) {
	speed += up;
    }
    else {
	speed += down;
    }
    cout << "current speed : " << speed << endl;
}

void Mario::printMarioStatus()
{
    cout << "age = " << age << endl;
    cout << "status = " << (int)status << endl;
    cout << "speed = " << speed << endl;
}

int main(void)
{
    Mario p1, p2;
    p1.age = 15;
    p1.status = big;
    p1.speed = SPEED_MIN;
    
    p1.printMarioStatus();
    p1.speedAccel(true);
    p1.printMarioStatus();
    p1.speedAccel(false);
    p1.printMarioStatus();
    return 0;
}
