/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
	
    int i = 0, j = 0;

    for (i = 1; i <= 9; i++)
    {
        printf("----- %d �� ���� -----\n", i);
        for (j = 1; j <= 9; j++)
        {
           
            printf("%d * %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }



    // type here.
	system("pause");
	return EXIT_SUCCESS;
}