#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;
    a++, b++;
    printf("a = %d, b = %d\n", a, b);
    ++a, ++b;
    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", ++a, ++b);
    printf("a = %d, b = %d\n", a++, b++);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
