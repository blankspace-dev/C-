#include <iostream>

using namespace std;

class Exam
{
public:
    Exam();
};

Exam::Exam()
{
    cout << "Exam 입니다." << endl;
}

int main(void)
{
    Exam* ex1 = new Exam();
    Exam* ex2 = new Exam();
    delete ex1;
    delete ex2;
    return 0;
}
