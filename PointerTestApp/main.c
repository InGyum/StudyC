/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - 김인겸.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	
    int a = 10;
    int* p = &a;
    double* pd;

    pd = p;

    printf("pd : %lf\n", *pd);
    printf("a : %d\n", a);
    printf("p : %d\n", *p);

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}