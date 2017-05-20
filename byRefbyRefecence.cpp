#include <iostream>

void byRefer(int& num1, int& num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    std::cout << "num 1 : " << num1 << " num 2 : " << num2 << std::endl;
    byRefer(num1, num2);
    std::cout << "num 1 : " << num1 << " num 2 : " << num2 << std::endl;
    return 0;
}
