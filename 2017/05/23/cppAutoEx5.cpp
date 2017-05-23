#include <iostream>

using namespace std;

struct exAuto{
    static const auto a = 5;
    static const auto b = 'h';
};

int main(void)
{
    struct exAuto ea;
    cout << "a : " << ea.a << endl;
    cout << "b : " << ea.b << endl;
    return 0;
}
