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
    //int a = 1;
    //int i;
    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    */
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0) {
            continue;
        }
        sum += i;

    }
    printf("sum = %d\n", sum);

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}