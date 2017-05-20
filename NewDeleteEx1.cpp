#include <iostream>

using namespace std;

int main(void)
{
    int* arr = new int[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    cout << arr[0] << " " << arr[1] << " " << arr[2];
    delete[] arr;
    return 0;
}
