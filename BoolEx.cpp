#include <iostream>

int main(void)
{
    bool data = false;
    if (data == false) {
	std::cout << "data = " << data << std::endl;
	data = true;
    }
    if (data == true) {
	std::cout << "data = " << data << std::endl;
    }
    return 0;
}
