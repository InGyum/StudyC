/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 변수 사용 영역
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - 김인겸.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수


void auto_func(void);
void static_func(void);
int a;

int main(void) 
{
    a = 0;
    printf("함수 호출 전 a 값 : %d\n", a);
    assign10();
    assign20();

    printf("함수 호출 후 a 값 : %d\n", a);

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

void assign10(void) {
    
    a = 10;
   }
void assign20(void) {
    int a;
    a = 20;
}