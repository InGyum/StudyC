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
   /* int a = 1;
    do

    {
        
        a *= 2;
        
    } while (a < 10);
    printf("a : %d\n", a);
    */
    int count = 0;
    while (1)
    {
        printf("Be Happy!\n");
        count++;
        if (count == 10)
        {
            break;
        }

    }




    // type here.
	system("pause");
	return EXIT_SUCCESS;
}