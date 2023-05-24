#include <stdio.h> //2차원 배열의 합 구하기
int main(void)
{
    int i, j, sum = 0;
    int a[2][2] = { 5, 20, 12, 7 };

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum += a[i][j];
        }
    }
    printf("2차원 배열 a의 합은 %d다.\n", sum);
    return 0;
}

#include <stdio.h> //학생별 평균 구하기
int main(void)
{
    int i, j, sum = 0;
    int a[][3] = { {90, 80, 90}, // 영희의 국어, 영어, 수학 점수
                 {70, 100, 100}, // 철수의 국어, 영어, 수학 점수
                 {80, 90, 90} }; // 미나의 국어, 영어, 수학 점수

    double average[3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        average[i] = (double)sum / j;
        printf("%d번 학생의 평균은 %.2lf이다.\n", i + 1, average[i]);

        //다음 학생의 평균을 구하기 위해 sum을 초기화한다.
        sum = 0;
    }
    return 0;
}

#include <stdio.h> //국어, 영어, 수학의 평균 구하기
int main(void)
{
    int i, j, sum = 0;
    int a[][3] = { {90, 80, 90}, // 영희의 국어, 영어, 수학 점수
                 {70, 100, 100}, // 철수의 국어, 영어, 수학 점수
                 {80, 90, 90} }; // 미나의 국어, 영어, 수학 점수

    double aveClass[3];

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            sum += a[i][j];
        }
        aveClass[j] = (double)sum / i;

        if (j == 0)
            printf("국어 평균은 %.2lf이다.\n", aveClass[j]);
        else if (j == 1)
            printf("영어 평균은 %.2lf이다.\n", aveClass[j]);
        else if (j == 2)
            printf("수학 평균은 %.2lf이다.\n", aveClass[j]);

        //다음 학생의 평균을 구하기 위해 sum을 초기화한다.
        sum = 0;
    }
    return 0;
}

다차원 배열은 스킵

함수(function)
*특별한 기능을 수행하는 것

잘 설계된 함수의 장점
*반복적으로 실행해야 할 내용을 함수로 만들어 필요할 때마다 호출해서 사용
*프로그램이 모듈화되므로 읽기 쉽고, 디버깅과 편집이 수월
*프로그램의 기능과 구조를 한눈에 알아볼 수 있음.
*다른 프로그램에서 재사용할 수 있음.

시스템 라이브러리 함수
*자주 사용하는 유용한 함수를 사용자가 바로 이용할 수 있게 C 시스템에 미리 만들어 놓은 것

사용자 정의 함수
*사용자 자신이 원하는 기능을 직접 만드는 함수

MultiTwo() 함수
*정수 2개(a, b)를 입력받아 곱한 결과를 result에 저장하고 그 값을 반환

Big() 함수
*정수 2개(a, b)를 입력받아 두 수 중에서 큰 수를 출력

함수의 선언
*함수원형(prototype)이라고도 함.
*사용자 정의 함수에 무엇이 있는지 알려주며, 함수를 정의하기 전에 선언
*구체적인 인자명을 기록하지 않고 인자의 자료형과 개수만 나타내도 됨.

함수의 호출
*함수가 정의된 형태에 맞추어 입력과 출력을 고려하여 함수를 사용

#include <stdio.h> //정수 2개를 더하는 함수
int SumTwo(int a, int b); //함수 선언
int main(void)
{
    int x = 10, y = 5;
    int value;

    value = SumTwo(x, y); //함수 호출

    printf("두 수의 합 : %d\n", value);

    return 0;
}
int SumTwo(int a, int b) //함수 정의
{
    int result;
    result = a + b;
    return result;
}

#include <stdio.h> //실수 2개를 입력받아 평균 출력하기
float Average(float x, float y); //함수 선언
int main(void)
{
    float num1, num2, result;
    printf("실수 2개를 입력하세요 : ");
    scanf("%f %f", &num1, &num2);

    result = Average(num1, num2); //함수 호출

    printf("두 실수의 편균 : %f\n", result);

    return 0;
}

float Average(float x, float y) //함수 정의
{
    float z;
    z = (x + y) / 2;
    return z;
}

#include <stdio.h>
int Integral(int start, int end); //함수 선언
int main(void)
{
    int result = 0, i;

    printf("함수를 사용하지 않고 합을 구함\n");
    for (i = 1; i <= 10; i++)
        result += i;

    printf("1부터 10까지 합은 %d다.\n", result);

    result = 0; //result 값을 다시 0으로 초기화함

    for (i = 7; i <= 17; i++)
        result += i;

    printf("7부터 17까지 합은 %d다.\n", result);
    printf("*************************************\n");
    printf("함수를 사용하여 합을 구함\n");
    printf("1부터 10까지 합은 %d다.\n", Integral(1, 10));
    printf("7부터 17까지 합은 %d다.\n", Integral(7, 17));

    return 0;
}int Integral(int start, int end) //함수 정의
{
    int sum = 0, i;
    for (i = start; i <= end; i++)
        sum += i;
    return sum;
}