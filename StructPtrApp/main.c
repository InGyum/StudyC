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

struct list
{
    int num;
    struct list* next;
};

int main(void) 
{
    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head -> num : %d\n", head -> num);
    printf("head -> next -> num : %d\n", head -> next -> num);

    
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}

