/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ������
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
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