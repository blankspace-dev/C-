#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>

#define MAX_NUM 6

int main(void)
{
    int i;

    printf("간단한 랜덤 번호 생성기 입니다.\n");
    printf(" 번호는 1 ~ 45 까지 생성됩니다.\n");
    srand(time(NULL));	//seed값 사용
    for (i = 0; i < MAX_NUM; i++) {
	printf("%d ", rand() % 45 + 1);	// rand() 함수는 난수를 발생시킴
    }
    return 0;
}
