/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 스왑
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - 김인겸.
*/
#include<stdio.h>
#include<stdlib.h>


// 메인함수
int main(void) 
{

    int a = 10;
    double b = 3.5;
    void* vp;
    
    vp = &a;
    printf("a : %d\n", *(int*)vp);

    vp = &b;
    printf("b : %.1lf\n", *(double*)vp);

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

