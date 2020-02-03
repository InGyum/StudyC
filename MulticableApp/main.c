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

// 메인함수
int main(void) 
{
	
    int i = 0, j = 0;

    for (i = 1; i <= 9; i++)
    {
        printf("----- %d 단 시작 -----\n", i);
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