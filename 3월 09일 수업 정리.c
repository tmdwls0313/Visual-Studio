C 프로그램의 구조​
*1개 이상의 함수로 구성​
*Main() 함수는 반드시 존재해야 함.​
*그 외의 함수는 사용자가 임의로 작성해서 사용
/*주석 내용*/
//전처리기(설명)
#include <stdio.h> (필수)
; : 말을 끝내는 기호
#include <stdio.h>

int main(void)
{
	//일반 명령문

	return 0; //main
}

#include <stdio.h> //도스 창에 텍스트를 출력하는 프로그램 작성하기

int main(void) //프로그램의 시작을 알리는 함수
{
	printf("제 이름은 정승진입니다.\n"); //printf로 화면에 출력, \n은 엔터를 의미함
	printf("제가 좋아하는 것은 C언어입니다.\n");
	printf("잘부탁드립니다.");
	return 0; //함수의 실행 결과를 반환​
}

변수
*프로그램에서 자료 값을 임시로 저장하는 장소
*값이 계속 변할 수 있음.

변수 선언
int age; (= 자료형 변수명;)
*이름이 age인 정수형 변수 1개를 선언한다는 의미
*주기억장치에 age라는 정수형 크기의 메모리가 할당

int age = 20;
또는
int age;
age = 20;
변수 선언을 사용할 때에는 무조건 선언할 명령어 앞에 포함한다.(아래~적용)
(예시)
...중략
int main(void)
{
	int age = 20;
	printf("나이는 %d살입니다.", age); //%d 뒤에는 ', age'
	printf("내년 나이는 %d살이고 작년 나이는 %d살입니다.", age + 1, age - 1); //정수이기 때문에 +1 사용이 가능하다, age는 순서에 따라 적용된다.
	return 0;
}

#include <stdio.h>

int main(void) //이름과 나이 출력하기
{
	int age = 20;
	printf("제 이름은 정승진입니다.\n");
	printf("제가 좋아하는 것은 C언어입니다.\n");
	printf("잘부탁드립니다.\n");
	printf("나이는 %d살입니다.", age);
	printf("내년 나이는 %d살이고 작년 나이는 %d살입니다.", age + 1, age - 1);
	return 0;
}

웹 버전 : https://www.onlinegdb.com/online_c_compiler