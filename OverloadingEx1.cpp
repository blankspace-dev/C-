#include <iostream>

void ExFunc(int a)
{
    std::cout << "ExFunc(int a) called : " << a << std::endl;
}

void ExFunc(char a)
{
    std::cout << "ExFunc(char a) called : " << a << std::endl;
}

int main(void)
{
    ExFunc(5);
    ExFunc('B');
    return 0;
}
