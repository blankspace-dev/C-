#include <iostream>
#include <cstdarg>

using namespace std;

void PrintNums(char* dataType, ...)
{
    va_list ap;
    int count = 0;

    va_start(ap, dataType);

    while (dataType[count] != '\0') {
	switch (dataType[count]) {
	case 'i' :
	    cout << "args : " << va_arg(ap, int) << " ";
	    break;
	case 'c' :
	    cout << "args : " << (char)va_arg(ap, int) << " ";
	    break;
	case 'd' :
	    cout << "args : " << va_arg(ap, double) << " ";
	    break;
	case 's' :
	    cout << "args : " << va_arg(ap, char*) << " ";
	    break;
	default :
	    break;
	}
	count++;
    }
    va_end(ap);
    cout << endl;
}

int main(void)
{
    PrintNums("i", 1);
    PrintNums("ic", 1, 's');
    PrintNums("sic", "Variable Ex", 2, 'h');
    PrintNums("sdci", "Variable Ex", 2.128923, 'h', 4);
    return 0;
}
