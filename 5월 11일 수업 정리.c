break문
*반복문을 빠져나오거나 switch~case문에서 정상적인 흐름을 변경하기 위해 사용
*주로 goto문 대신에 쓰는 방법으로 switch~case문에서는 거의 필수적으로 사용

#include <stdio.h> //간단한 break문 사용하기
int main(void)
{
    int i;

    for (i = 1; i < 100; i++)
    {
        printf("%d ", i);
        if (i >= 5) break;
    }
    printf("\nfor문을 빠져나왔습니다.\n");
    return 0;
}

continue문
*반복문을 빠져나오지 않고 해당 반복문의 처음으로 프로그램의 흐름을 이동

#include <stdio.h> //continue문을 이용하여 홀수만 더하기
int main(void)
{
    int i, sum = 0, sum1 = 0;

    for (i = 1; i < 10; i++)
    {
        if (i % 2 == 0) continue;
        sum += i;
    }
    for (i = 1; i < 10; i++)
    {
        if (i % 2 == 1) continue;
        sum1 += i;
    }

    printf("1부터 10까지 홀수의 합은 %d다.\n", sum);
    printf("1부터 10까지 짝수의 합은 %d다.", sum1);
    return 0;
}

#include <stdio.h> //2의 배수이면서 3의 배수인 수를 제외하고 출력하기
int main(void)
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        if ((i % 2 == 0) && (i % 3 == 0)) continue;
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

#include <stdio.h> //문제 만들기
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int answer, number, x, y;
    srand(time(NULL));
    answer = x + y;
    while (1)
    {
        x = rand() % 10;
        y = rand() % 10;
        answer = x + y;

        printf("%d + %d = \n", x, y);
        scanf("%d", &number);

        if (answer == number)
            break;

        else if (answer != number)
            continue;
    }

    printf("\n정답: %d", answer);
    return 0;
}

배열
*동일한 종류, 동일한 자료형의 데이터를 일련의 구조화된 집단으로 메모리에 구성

배열 선언
*배열의 각 요소는 배열명에 원소 번호를 붙여서 명명
*첫 번째 원소는 score[0]과 같이 0부터 시작

1차원 배열
*대괄호([]) 하나로 선언하는 배열
*반복문과 함께 사용하면 유용
*반복문의 초깃값을 설정할 때 배열의 원소는 0부터 시작

#include <stdio.h> //배열을 초기화하고 원소 출력하기
int main(void)
{
    int i;
    int a[] = { 5, 10, 15 };

    for (i = 0; i < 3; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

#include <stdio.h> //배열 원소의 합과 평균 구하기
int main(void)
{
    int A[5] = { 1, 2, 3, 4, 5 };
    int i, sum = 0;
    double average;

    for (i = 0; i < 5; i++)
        sum += A[i];

    average = (double)sum / i;
    printf("배열 A 원소의 합은 %d다.\n", sum);
    printf("배열 A 원소의 평균은 %4.2lf이다.\n", average); //소수점 2자리

    return 0;
}

2차원 배열
*행과 열로 표현된 행렬과 비슷

#include <stdio.h> //2차원 배열의 초기화
int main(void)
{
    int i, j;
    int a[2][3] = { {15, 20}, {25, 30} };

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
    return 0;
}

#include <stdio.h> //{} 뺀 결과 비교
int main(void)
{
    int i, j;
    int a[2][3] = { 15, 20, 25, 30 };

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
    return 0;
}