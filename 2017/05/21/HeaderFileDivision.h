#ifndef __HEADER_FILE_DIVISION__
#define ___HEADER_FILE_DIVISION__

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

#endif
