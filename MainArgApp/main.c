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

// 메인함수
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