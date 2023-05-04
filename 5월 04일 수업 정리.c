다중 for문
* for문이 2개 이상인 것
* 실행 순서나 형식은 단일 for문과 같음.

#include <stdio.h> //다중 for문을 이용하여 변수 2개의 합 구하기
int main(void)
{
    int sum, i, j;

    printf("다중 for문 예제입니다.\n");

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            sum = i + j;
            printf("%d + %d = %d\n", i, j, sum);
        }
    }
    return 0;
}

#include <stdio.h> //구구단(1단~9단)
int main(void)
{
    int sum, i, j;

    printf("다중 for문 예제입니다.\n");

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            sum = i * j;
            printf("%d * %d = %d\n", i, j, sum);
        }
    }
    return 0;
}

#include <stdio.h> //구구단 제목 추가
int main(void)
{
    int sum, i, j;

    printf("다중 for문 예제입니다.\n");

    for (i = 1; i <= 9; i++)
    {
        printf("%d 단\n", i);
        for (j = 1; j <= 9; j++)
        {
            sum = i * j;
            printf("%d * %d = %d\n", i, j, sum);
        }
    }
    return 0;
}

#include <stdio.h> //다중 for문을 이용하여 곱하기 표시 증가시키기
int main(void)
{
    int i, j;

    for (i = 1; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h> //다중 for문을 이용하여 곱하기 표시 감소시키기
int main(void)
{
    int i, j;

    for (i = 6; i > 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

while문
* 횟수를 정확하게 알지는 못하지만 반복의 조건을 알고 있을 때 사용

#include <stdio.h> //1에서 10까지의 합 구하기
int main(void)
{
    int sum = 0, number = 1;
    printf("1에서 10까지 합을 구합니다.\n");

    while (number <= 10)
    {
        sum += number;
        number++;
    }

    printf("합은 %d입니다.\n", sum);
    return 0;
}

do~while문
* 일단 do 안에 있는 명령문을 수행하고 나중에 while문의 조건식을 비교
* 적어도 한 번은 명령문을 처리
* 마지막에 세미콜론(;)을 반드시 넣어야 함.

#include <stdio.h> //do~while문을 이용하여 1에서 10까지의 합 구하기
int main(void)
{
    int sum = 0;
    int number = 0;

    printf("1에서 10까지 합을 구합니다.\n");

    do
    {
        number++;
        sum += number;
    } while (number < 10);

    printf("합은 %d입니다.\n", sum);

    return 0;
}

#include <stdio.h> //숫자 맞추기 게임(랜덤)
#include <stdlib.h> //랜덤함수
#include <time.h> //시간이 흐를 때마다 랜덤하게
int main(void)
{
    int answer, guess, tries = 0;
    srand(time(NULL));
    answer = rand() % 100; //0~99

    printf("추측해보세요.\n");

    do
    {
        scanf("%d", &guess);
        tries++;

        if (guess > answer)
            printf("정답보다 너무 큽니다.\n");

        if (guess < answer)
            printf("정답보다 너무 작습니다.\n");

        printf("%d 번 입력했습니다.\n", tries);

    } while (guess != answer);
    printf("%d 번만에 맞췄습니다. 정답: %d", tries, answer);

    return 0;
}