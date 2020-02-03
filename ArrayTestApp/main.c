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
    int score[5];
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);

    }
    for (int i = 0; i < count; i++)
    {
        total += score[i];
    }

    avg = total / (double)count;
    printf("평균은 %.1lf\n", avg);


    // type here.
	system("pause");
	return EXIT_SUCCESS;
}