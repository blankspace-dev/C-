#include <iostream>

inline int ADD(int num1, int num2)
{
    return num1 + num2;
}

int main(void)
{
    std::cout << ADD(4, 5) << std::endl;
    std::cout << ADD(10, 30) << std::endl;
    return 0;
}
