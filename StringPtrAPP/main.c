/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���ڿ� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


// �����Լ�
int main(void) 
{
    
    int a = 10;
    int* pi;
    int** ppi;

    pi = &a;
    ppi = &pi;

    printf("------------------------------------------\n");
    printf("����    ������    &����    *����    **����      \n");
    printf("------------------------------------------\n");
    printf("  a%10d%10p\n", a, &a);
    printf(" pi%10p%10p%10d\n", pi, &pi,*pi);
    printf("ppi%10p%10p%10p%10d\n", ppi, &ppi, *ppi,**ppi);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}