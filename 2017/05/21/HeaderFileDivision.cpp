#include "HeaderFileDivision.h"

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
