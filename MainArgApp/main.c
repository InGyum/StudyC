/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - 김인겸.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(int argc, char **argv) 
{
    if (argc <= 1)
    {
        printf("명령 구문이 올바르지 않습니다.\n");
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
    printf("첫번째 명령인수 %s\n", intarg[0]);
    printf("첫번째 명령인수 %s\n", intarg[1]);
    for (int i = 0; i < 2; i++)
    {
        free(intarg[i]);
    }
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}