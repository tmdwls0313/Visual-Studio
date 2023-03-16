﻿scanf() 함수
키보드를 통해 자료를 읽어들이는 함수

scanf() 함수의 기본 형식
scanf(“변환기호(Format - String)......”& 변수1, &변수2, ......);

변환기호와 변수의 관계​
scanf("%d", &age);

#include <stdio.h>
int main(void)
{
    int age = 0;
    printf("당신의 나이를 입력하세요.\n");
    scanf("%d", &age) //키보드의 입력을 기다림
        printf("당신의 나이는 %d입니다.\n", age)

        return 0;
}

#include <stdio.h>
int main(void)
{
    int age = 0, birthyear = 0;
    printf("당신의 나이와 출생 연도를 입력하세요.\n");
    scanf("%d %d", &age, &birthyear); //순서대로 대응
    printf("당신은 %d년에 출생한 %d세입니다.\n", birthyear, age);

    return 0;
}

#include <stdio.h>
int main(void)
{
    int length, area;
    printf("정사각형 한 변의 길이를 입력하시오.\n");
    scanf("%d", &length);

    area = length * length; //오른쪽의 계산을 왼쪽으로 출력
    printf("정사각형의 넓이는 %d다.\n", area);

    return 0;
}

#include <stdio.h>
int main(void)
{
    int length, height, area;
    printf("삼각형의 밑변과 높이를 입력하시오.\n");
    scanf("%d %d", &length, &height);

    area = length * height / 2;
    printf("삼각형의 넓이는 %d다.\n", area);

    return 0;
}

#include <stdio.h>
int main(void)
{
    int x, y, sum, diff, mul, div;
    printf("정수 2개를 입력하시오.\n");
    scanf("%d %d", &x, &y);

    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;

    printf("덧셈은 %d\n", sum);
    printf("뺄셈은 %d\n", diff);
    printf("곱하기는 %d\n", mul);
    printf("나누기는 %d\n", div);

    return 0;
}