/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���� �޸� �Ҵ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// �����Լ�
int main(void) 
{
    int* pi;
    int size = 5;
    int count = 0;
    int num;
    int i;

    pi = (int*)calloc(size, sizeof(int));

    while (1)
    {
        printf("����� �Է��ϼ��� => ");
        scanf("%d", &num);

        if (num <= 0)
        {
            break;
        }
        if (count == size)
        {
            size += 5;
            pi = (int*)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;

    }
    for (int i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);
    }
    free(pi);
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}