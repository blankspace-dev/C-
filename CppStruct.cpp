#include <iostream>

#define SPEED_MIN 0
#define SPEED_MAX 99

using namespace std;

enum { small = 0, big, flower, star, fly };

struct Mario
{
    enum
    {
	small = 0,
	big,
	flower,
	star,
	fly
    };
    int age;	    ///<
    char status;    ///<마리오의 상태.
    int speed;	    ///<

    void printMarioStatus();
};

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
    
    p2.age = 25;
    p2.status = fly;
    p2.speed = SPEED_MAX;
   
    p1.printMarioStatus();
    p2.printMarioStatus();
    return 0;
}
