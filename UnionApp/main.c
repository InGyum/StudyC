/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ����ü �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
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
    printf("���� ���� Ȱ�� => %s\n", pc);
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
    printf("������ �Է��Ͻÿ� : ");
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
    printf("���� ���� Ȱ�� => %s\n", pc);

    // type here.
    system("pause");
    return EXIT_SUCCESS;
}
*/