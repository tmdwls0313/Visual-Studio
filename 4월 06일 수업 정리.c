switch~case문
*조건식을 먼저 평가한 뒤 그 식의 값이 case 상수와 일치하는 쪽으로 분기하여 해당 명령문을 수행

#include <stdio.h> //switch~case문 사용하기
int main(void)
{
    int input;

    printf("영어로 인사하는 법을 배우겠습니다.\n");
    printf("아침 인사는 1번을 누르세요.\n");
    printf("점심 인사는 2번을 누르세요.\n");
    printf("저녁 인사는 3번을 누르세요.\n");
    scanf("%d", &input);

    switch (input){
        case 1 :
            printf("Good Morning!!\n");
            break; //반복문을 빠져나오기 위해 사용
        case 2 :
            printf("Good Afternoon!!\n");
            break;
        case 3 :
            printf("Good Night!!\n");
            break;
    }

    return 0;
}

#include <stdio.h> //default를 사용하여 예외 처리하기
int main(void)
{
    int input;

    printf("영어로 인사하는 법을 배우겠습니다.\n");
    printf("아침 인사는 1번을 누르세요.\n");
    printf("점심 인사는 2번을 누르세요.\n");
    printf("저녁 인사는 3번을 누르세요.\n");
    scanf("%d", &input);

    switch (input){ //(조건식)
        case 1 :
            printf("Good Morning!!\n");
            break;
        case 2 :
            printf("Good Afternoon!!\n");
            break;
        case 3 :
            printf("Good Night!!\n");
            break;
        default : //다른 값을 입력했을 경우
            printf("잘못 입력했습니다. 1~3 사이의 숫자를 입력하세요.\n");
    }

    return 0;
}

#include <stdio.h> //switch문의 조건으로 수식 사용하기
int main(void)
{
    int score;

    printf("당신의 점수를 입력하세요 :");
    scanf("%d", &score);

    switch (score / 10)
    {
        case 10 :
        case 9 : printf("점수는 %d점이고 성적은 %c입니다.\n", score, 'A'); break;

        case 8 : printf("점수는 %d점이고 성적은 %c입니다.\n", score, 'B'); break;

        case 7 : printf("점수는 %d점이고 성적은 %c입니다.\n", score, 'C'); break;

        case 6 : printf("점수는 %d점이고 성적은 %c입니다.\n", score, 'D'); break;

        default : printf("점수는 %d점이고 성적은 %c입니다.\n", score, 'F'); break;
    }

    return 0;
}

#include <stdio.h> //Break문을 적절하게 사용하지 않은 예
int main(void)
{
    int input;

    printf("당신의 점수를 입력하세요 :");
    scanf("%d", &input);

    switch (input)
    {
        case 1 :
            printf("겨울 특강 수강 자격을 받습니다.!!\n");
            break;
        case 2 :
            printf("겨울 특강 수강 자격을 받습니다.!!\n");
            printf("장학금을 받습니다.\n");
            break;
        case 3 :
            printf("겨울 특강 수강 자격을 받습니다.!!\n");
            printf("장학금을 받습니다.\n");
            printf("해외 연수 기회가 주어집니다.\n");
            break;
        default :
            printf("잘못 입력했습니다. 1~3 사이의 숫자를 입력하세요.\n");
    }
}

#include <stdio.h> //Break문을 적절하게 사용한 예
int main(void)
{
    int input;

    printf("당신의 점수를 입력하세요 :");
    scanf("%d", &input);

    switch (input)
    {
        case 3 :
            printf("해외 연수 기회가 주어집니다.\n");
        case 2 :
            printf("장학금을 받습니다.\n");
        case 1 :
            printf("겨울 특강 수강 자격을 받습니다.!!\n");
            break;
        default :
            printf("잘못 입력했습니다. 1~3 사이의 숫자를 입력하세요.\n");
    }
}

#include <stdio.h>

int main(void) //switch문을 이용한 사칙연산
{
    int num1, num2;
    char arithmetic; //character을 char로 줄여 쓸 수 있음, char은 문자

    printf("숫자 2개와 연산자를 입력하세요.\n\n");

    printf("연산자는 아래와 같습니다.\n");
    printf("더하기 : +, 빼기 : -, 곱하기 : *, 나누기 : /\n");
    printf("입력 순서 : 정수1 연산자 정수2\n\n");
    scanf("%d %c %d", &num1, &arithmetic, &num2);

    switch (arithmetic)
    {
        case '+' :
            printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 + num2);
            break;

        case '-' :
            printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 - num2);
            break;

        case '*' :
            printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 * num2);
            break;

        case '/' :
            printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 / num2);
            break;

        default :
            printf("연산자를 잘못 입력했습니다.\n");
            break;
    }

    return 0;
}

#include <stdio.h> //if~else if문을 이용한 사칙연산

int main(void)
{
    int num1, num2;
    char arithmetic;

    printf("숫자 2개와 연산자를 입력하세요.\n\n");

    printf("연산자는 아래와 같습니다.\n");
    printf("더하기 : +, 빼기 : -, 곱하기 : *, 나누기 : /\n");
    printf("입력 순서 : 정수1 연산자 정수2\n\n");
    scanf("%d %c %d", &num1, &arithmetic, &num2);

    if (arithmetic == '+')
        printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 + num2);

    else if (arithmetic == '-')
        printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 - num2);

    else if (arithmetic == '*')
        printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 * num2);

    else if (arithmetic == '/')
        printf("%d %c %d = %d \n", num1, arithmetic, num2, num1 / num2);

    else
        printf("연산자를 잘못 입력했습니다.\n");

    return 0;
}

조건 연산자​
*C 언어에서 유일하게 피연산자가 3개인 삼항 연산자​
*? 와 : 연산자를 이용하여 프로그램을 제어

#include <stdio.h>

int main(void) //조건 연산자를 이용하여 큰 값과 작은 값 구하기
{
    int min, max;

    int x = 10, y = 20;

    max = (x > y) ? x : y; //"(문장 1) ? (문장 2) : (문장 3);" 문장 1의 내용이 참이면 문장 2를 수행하고, 거짓이면 문장 3을 수행
    min = (x > y) ? y : x;

    printf("두 수 %d과 %d 중에 큰 수는 %d이다.\n", x, y, max);
    printf("두 수 %d과 %d 중에 작은 수는 %d이다.\n", x, y, min);

    return 0;
} 