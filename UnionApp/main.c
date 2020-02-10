/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 공용체 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - 김인겸.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
enum season { SPRING, SUMMER, FALL, WINTER};
int main(void) 
{
    char a = 0;
    enum season ss;
    char* pc = NULL;
    ss = a;

   
       
    switch (ss)
    {
    case SPRING:
        pc = "inline"; break;
    case SUMMER:
        pc = "swimming"; break;
    case FALL:
        pc = "trip"; break;
    case WINTER:
        pc = "skiing"; break;
    }
    printf("나의 레저 활동 => %s\n", pc);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}



/*

enum season { SPRING, SUMMER, FALL, WINTER };
int main(void)
{
    char a = 0;
    enum season ss;
    char* pc = NULL;
    ss = a;
    printf("계절을 입력하시오 : ");
    scanf("%s", &a);
    switch (ss)
    {
    case SPRING:
        pc = "inline"; break;
    case SUMMER:
        pc = "swimming"; break;
    case FALL:
        pc = "trip"; break;
    case WINTER:
        pc = "skiing"; break;
    }
    printf("나의 레저 활동 => %s\n", pc);

    // type here.
    system("pause");
    return EXIT_SUCCESS;
}
*/