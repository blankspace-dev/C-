#include <stdio.h>
int Plus(int x, int y)
{
    return x + y;
}
int main(void)
{
    int a = 10, b = 15;
    int sum;
    int (*funcPtr) (int, int);
    funcPtr = Plus;
    sum = funcPtr(a, b);
    printf( "%d + %d = %d\n", a, b, sum);
    return 0;
}
