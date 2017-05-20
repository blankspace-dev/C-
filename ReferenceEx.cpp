#include <iostream>

int main(void)
{
    int n1 = 105;
    int &n2 = n1;
    int &n3 = n2;
    std::cout << "n1 : " << n1 << std::endl;
    std::cout << "n2 : " << n2 << std::endl;
    std::cout << "n3 : " << n3 << std::endl;
    return 0;
}
