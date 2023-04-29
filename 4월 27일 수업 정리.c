#include <stdio.h> //다양한 초깃값, 조건식, 증감식

int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
        printf("**********\n"); //i = 0으로 시작해서 i가 5보다 작으면 printf를 +1회 실행한다. (4월 13일 수업 정리.c)
    printf("\n\n");

    for (i = 1; i < 10; i += 2) //i = 1로 시작해서 i가 10보다 작으면 printf를 /2만큼 실행한다.
        printf("**********\n");
    printf("\n\n");

    for (i = 10; i > 0; i -= 2) //i = 10으로 시작해서 i가 0보다 크면 printf를 /2만큼 실행한다.
        printf("**********\n");
    //3개 모두 같음.

    return 0;
}

#include <stdio.h>

int main(void)
{
    int i, Sum = 0;

    for (i = 1; i <= 10; i += 2)
        Sum += i;
    printf("1~10까지 홀 수의 합은 %d다.\n", Sum);
    printf("\n\n");
    Sum = 0;

    for (i = 2; i <= 10; i += 2)
        Sum += i;
    printf("1~10까지 짝 수의 합은 %d다.\n", Sum);

    return 0;
}

#include <stdio.h> //초깃값과 증감식이 복수 문장인 경우

int main(void)
{
    int i, j;
    for (i = 0, j = 0; i < 3; i++, j++) //i가 0, j가 0인데 i가 3보다 작으면 printf(i와 j)를 +1회 실행한다.
        printf("i = %d, j = %d\n", i, j);

    return 0;
}