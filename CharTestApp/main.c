/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� /���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>


// �����Լ�


int main(void) 
{
    int num, grade;

    printf("�й� �Է� : ");
    scanf("%d", &num);
    getchar();
    printf("���� �Է� : ");
    grade = getchar();
    printf("�й� : %d, ���� : %c\n", num, grade);



    // type here.
	system("pause");
	return EXIT_SUCCESS;
}