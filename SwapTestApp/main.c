/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / swap
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Kim In Gyum.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수

void swap(int* pa, int* pb);

int main(void) 
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a : %d, b:%d\n", a, b);


    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

void swap(int* pa, int* pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

}