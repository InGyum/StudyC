/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - ���ΰ⤤.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    char ch;
    int res;
    while (1)
    {
        printf("C:");
        res = scanf("%c", &ch);
        if (res == -1) { break; }
        
                

        char a[80] = "PC01";
        printf("ȣ��Ʈ �̸� : %s\n", a);
        char b[80] = "Microsoft Windows 10 Pro";
        printf("OS �̸� :     %s\n", b);
        char c[80] = "10.0.18363 N/A ���� 18363";
        printf("OS ���� : %s\n", c);
        /*   printf("OS ������ü : %s\n");
           printf("OS ���� : %s\n");
           printf("OS ���� ���� : %s\n");
           printf("��ϵ� ������ : %s\n");
           printf("��ϵ� ���� : %s\n");
           printf("��ǰ ID : %s\n");
           printf("���� ��ġ ��¥ : %s\n");
           printf("�ý��� ��Ʈ �ð� : %s\n");
           printf("�ý��� ������ü : %s\n");
           printf("�ý��� �� : %s\n");
           printf("�ý��� ���� : %s\n");
           printf("���μ��� : %s\n");
           printf("          ");
           printf("BIOS ���� : %s\n");
           printf("Windows ���͸� : %s\n");
           printf("�ý��� ���͸� : %s\n");
           printf("���� ��ġ : %s\n");
           printf("�ý��� ��Ķ : %s\n");
           printf("�Է� ��Ķ : %s\n");
           printf("ǥ�� �ð��� : %s\n");
           printf("�� ���� �޸� : %s\n");
           printf("��� ������ ���� �޸� : %s\n");
           printf("���� �޸� : �ִ� ũ�� : %s\n");
           printf("���� �޸� : ��� ���� : %s\n");
           printf("���� �޸� : ��� �� : %s\n");
           printf("������ ���� ��ġ : %s\n");
           printf("������ : %s\n");
           printf("�α׿� ���� : %s\n");
           printf("���Ƚ� : %s\n");
           */

    }


    // type here.
	system("pause");
	return EXIT_SUCCESS;
}