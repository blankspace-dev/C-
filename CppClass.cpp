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


class Mario
{
    enum
    {
	down  = -10,
	up    = 10,
    };
private:
    int age;	    ///<
    char status;    ///<마리오의 상태.
    int speed;	    ///<
public:
    int Age(void) { return age; }
    void setAge(int _age) { age = _age; }
    char Status(void) { return status; }
    void setStatus(char _status) { status = _status; }
    int Speed(void) { return speed; }
    void setSpeed(int _speed) { speed = _speed; }
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
    p1.setAge(15);
    p1.setStatus(big);
    p1.setSpeed(SPEED_MIN);
   
    cout << "age : " << p1.Age() << " status : " << (int)p1.Status() << " speed : " << p1.Speed() << endl;
    return 0;
}
