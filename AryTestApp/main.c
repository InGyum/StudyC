/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/ �迭�� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�

void print_ary(int* pa,int size);

int main(void) 
{
	
    int ary[5] = { 10, 20, 30, 40, 50 };
    int ary1[7] = { 10, 20, 30, 40, 50, 60, 70 };
    int size = 0;

    size = sizeof(ary) / sizeof(ary[0]);
    print_ary(ary,size);
    printf("\n");
    size = sizeof(ary1) / sizeof(ary1[0]);
    print_ary(ary1, size);
    

    
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

//�迭 ����Լ�
void print_ary(int* pa,int size)
{
    int i;

    for (int i = 0; i < size; i++)
    {
        printf("%4d ", pa[i]);
    }
    printf("\n");
}