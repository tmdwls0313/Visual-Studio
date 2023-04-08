복습

#include <stdio.h>
int main(void)
{
    double mile, km;
    printf("마일을 입력하세요.\n");
    scanf("%lf", &mile);
    km = mile * 1.609;

    printf("%f 마일은 %.2f 키로미터 \n", mile, km);
    return 0;
}

제어문​
*프로그램의 실행을 인위적으로 조절​
*프로그램의 흐름을 제어(이동 또는 반복시킴)



#include <stdio.h> //제어문
int main(void)
{
    int input;
    printf("양수를 입력하세요.\n");
    scanf("%d", &input);

    if (input >= 12) //x가 y보다 크거나 같을 때
        printf("12세이상 영화가능\n");
    else //만약 ~~ 아니라면
        printf("11세이하 영화불가능\n");

    return 0;
}

#include <stdio.h> //합격, 불합격 구하기
int main(void)
{
    int x, y, z, input;
    printf("3개의 정수를 입력하세요.\n");
    scanf("%d %d %d", &x, &y, &z);

    input = x + y + z;

    if (input >= 100)
        printf("합격\n");
    else
        printf("불합격\n");

    return 0;
}

if~else문​
*조건식이 참이면 if문 아래 문장을, 거짓이면 else문 아래 문장을 수행

#include <stdio.h> //입력받은 양수가 홀수 또는 짝수인지 확인하기
int main(void)
{
    int input;
    printf("양수를 입력하세요.\n");
    scanf("%d", &input);

    if (input % 2 == 0) //%는 나머지, ==는 같다.
        printf("입력한 수 %d는 짝수입니다.\n", input);
    else
        printf("입력한 수 %d는 홀수입니다.\n", input);

    return 0;
}

#include <stdio.h> //다중 if문 사용하기
int main(void)
{
    int input;
    printf("양수를 입력하세요.\n");
    scanf("%d", &input);

    if (input >= 0)
    {
        if (input % 2 == 0)
            printf("입력한 수 %d은 짝수입니다.\n", input);
        else
            printf("입력한 수 %d은 홀수입니다.\n", input);
    }
    else
    {
        printf("입력한 수 %d은 음수입니다.\n", input);
    }
    
    return 0;
}
