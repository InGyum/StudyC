/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - 김인겸.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// 메인함수
int main(void) 
{
    char str[80];

    printf("문자열 입력 : ");
    gets(str);
    puts("입력된 문자열 : ");
    puts(str);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}