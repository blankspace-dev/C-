#include <iostream>

namespace NamespaceEx1
{
    void NamespaceFunc(void)
    {
	std::cout << "NamespaceEx1 입니다" << std::endl;
    }
}

namespace NamespaceEx2
{
    void NamespaceFunc(void)
    {
	std::cout << "NamespaceEx2 입니다" << std::endl;
    }
}

int main(void)
{
    NamespaceEx1::NamespaceFunc();
    NamespaceEx2::NamespaceFunc();
    return 0;
}
