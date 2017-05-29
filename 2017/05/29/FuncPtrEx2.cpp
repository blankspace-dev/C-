#include <stdio.h>
int Plus(int a, int b)
{
    return a + b;
}

int Minus(int a, int b)
{
    return a - b;
}

int Multiply(int a, int b)
{
    return a * b;
}

int main(void)
{
    int a, b, res;
    int (*funcPointerArray[3]) (int, int) = {Plus, Minus, Multiply};

    for (a = 0; a < sizeof(funcPointerArray) / sizeof(funcPointerArray[0]); a++ )
    {
	res = funcPointerArray[a](35, 10);
	printf(" res = %d\n", res);
    }
    return 0;
}
