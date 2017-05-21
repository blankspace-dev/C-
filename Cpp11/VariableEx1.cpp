#include <iostream>

using namespace std;

void PrintNums(int args, ...)
{
    cout << "args : " << args << endl;
}

int main(void)
{
    PrintNums(1, 1);
    PrintNums(2, 1, 2);
    PrintNums(3, 1, 2, 3);
    PrintNums(4, 1, 2, 3, 4);
    return 0;
}
