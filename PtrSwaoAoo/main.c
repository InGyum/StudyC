/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ����
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - ���ΰ�.
*/
#include<stdio.h>
#include<stdlib.h>


// �����Լ�
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
