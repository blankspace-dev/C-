#include <iostream>

int& ReternRefer1(int num)
{
    num+=2;
    return num;
}

int& ReternRefer2(int& num)
{
    num+=2;
    return num;
}

int main(void)
{
    int num = 0;
    std::cout << "num : " << num << std::endl;
    num = ReternRefer1(num);
    std::cout << "num : " << num << std::endl;
    num = ReternRefer2(num);
    std::cout << "num : " << num << std::endl;
    return 0;
}
