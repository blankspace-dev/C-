#include <iostream>
#include <cstdarg>  // c 에서는 stdarg.h

using namespace std;

void PrintNums(int args, ...)
{
    va_list ap;

    va_start(ap, args);
    for (int i = 0; i < args; i++) {
	int n = va_arg(ap, int);
	cout << "args " << args << " : " << n << endl;
    }
    va_end(ap);
    cout << endl;
}

int main(void)
{
    PrintNums(1, 1);
    PrintNums(2, 1, 2);
    PrintNums(3, 1, 2, 3);
    PrintNums(4, 1, 2, 3, 4);
    return 0;
}
