/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(int argc, char **argv) 
{
    int i;
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}