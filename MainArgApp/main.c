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
#include <string.h>
// �����Լ�
int main(int argc, char **argv) 
{
    if (argc <= 1)
    {
        printf("��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        exit(1);
    }
    char* intarg[2];

    int i;
    for (int i = 0; i < argc; i++)
    {
        if (i==0)
        {
            continue;
            strcpy(intarg[i], argv[i]);
        }
        intarg[i] = (char*)malloc(strlen(argv[i]) + 1);

        printf("%s\n", argv[i]);
    }
    printf("ù��° ����μ� %s\n", intarg[0]);
    printf("ù��° ����μ� %s\n", intarg[1]);
    for (int i = 0; i < 2; i++)
    {
        free(intarg[i]);
    }
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}