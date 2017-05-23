#include <iostream>

using namespace std;

bool autoFunc(auto flag)
{
    if (flag == true) {
	return true;
    }
    else {
	return false;
    }
}

int main(void)
{
    cout << autoFunc(true) << endl;
    cout << autoFunc(false) << endl;
    return 0;
}
