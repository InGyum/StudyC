/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 정적 지역 변수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - 김인겸.
*/

#include <stdio.h>
#include <stdlib.h>


// 메인함수

int* sum(int a,int b);

int main(void) 
{
    int* resp;
    resp = sum(10, 20);

    printf("두 정수의 합 : %d\n", *resp);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

int* sum(int a,int b)
{
    static int res;
    res = a + b;
    return &res;
}