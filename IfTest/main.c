/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� /���ù� �۾�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a = 20, b = 10;
    if (a > 10)
    {
        if (b >= 0)
        {
            b = 1;
        }
        else
        {
            b = -1;
        }
    }
    
    printf("a : %d, b : %d\n", a, b);

    // type here.
	system("pause");
	return EXIT_SUCCESS;
}