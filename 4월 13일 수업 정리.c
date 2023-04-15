#include <stdio.h> //조건 연산자를 이용하여 유횻값 확인하기

int main(void)
{
    int x;

    printf("양수를 입력하세요.\n");
    scanf("%d", &x);

    (x >= 0) ? printf("x는 유효한 값입니다.\n") : printf("x는 유효한 값이 아닙니다.\n"); //x 값이 0보다 같거나 크면 'x는 유효한 값입니다.'를 출력하고, 그렇지 않으면 'x는 유효한 값이 아닙니다.'를 출력
    return 0;
}

#include <stdio.h> //if문을 이용하여 큰 값과 작은 값 구하기

int main(void)
{
    int min, max;
    int x, y;

    printf("숫자 2개를 입력하세요.\n");
    scanf("%d %d", &x, &y);

    if (x > y) { //x 값이 더 클 때
        max = x; //큰 수를 x 값으로 출력
        min = y; //작은 수를 y 값으로 출력
    }

    else { //그렇지 않다면
        max = y; //큰 수를 y 값으로 출력
        min = x; //작은 수를 x 값으로 출력
    }

    printf("두 수 %d와 %d 중 큰 수는 %d이다.\n", x, y, max);
    printf("두 수 %d와 %d 중 작은 수는 %d이다.\n", x, y, min);

    return 0;
}

반복문
*동일한 내용을 반복하거나 일정한 규칙으로 반복하는 일을 수행할 때 사용
*프로그램을 좀 더 간결하고 실제적으로 작성할 수 있음.

for문
*특정한 문장을 일정한 횟수만큼 반복시킬 때 사용

for (초기화; 조건식; 증감식)
{   ❶     ❷      ❹

    ❸ 명령문 1;
       명령문 2;
         ⋮
}

실행 순서 : ❶ → ❷ → ❸ → ❹ → ❷ → ❸ → ❹ 순으로 실행

#include <stdio.h> //반복문을 이용하여 동일한 문장 출력하기

int main(void)
{
    int i;

    for (i = 0; i < 5; i++) //i = 0으로 시작해서 i가 5보다 작으면 printf를 +1회 실행한다.
        printf("**********\n");

    return 0;
}

#include <stdio.h> //반복문을 이용하여 합 구하기

int main(void)
{
    int i, Sum = 0;

    for (i = 1; i <= 10; i++) //i = 1로 시작해서 i가 10보다 작으면 Sum에 +1씩 더한다
        Sum += i;

    printf("1부터 10까지의 합은 %d다.\n", Sum);

    return 0;
}