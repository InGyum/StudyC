/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���� ��� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�


void auto_func(void);
void static_func(void);
int a;

int main(void) 
{
    a = 0;
    printf("�Լ� ȣ�� �� a �� : %d\n", a);
    assign10();
    assign20();

    printf("�Լ� ȣ�� �� a �� : %d\n", a);

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