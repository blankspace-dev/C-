#include <iostream>
int Exfunc(int num1=5, int num2=10);

int main(void)
{
    Exfunc();
    Exfunc(15);
    Exfunc(15, 20);
    return 0;
}

int Exfunc(int num1, int num2)
{
    std::cout << "num1 : " << num1 << " num2 : " << num2 << std::endl;
}

