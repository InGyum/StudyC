/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/ ���� ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - ���ΰ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
int main(void) 
{/*
    FILE* ifp, * ofp;
    char str[80];
    char* res;

    ifp = fopen("aa.txt", "r");
    if (ifp == NULL) {
        printf("�Է� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }

    ofp = fopen("cc.txt", "w");
    if (ofp == NULL) {
        printf("��� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }
    while (1)
    {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL) {
            break;
        }
        str[strlen(str) - 1] = '\0';
        fputs(str, ofp);
        fputs("",ofp);
    }
    fclose(ifp);
    fclose(ofp);*/
   
    FILE* ifp,* ofp;
    char name[20];
    int kor, eng, math;
    int total;
    double avg;
    int res;

    ifp = fopen("e.txt", "r");
    if (ifp == NULL) {
        printf("���� ����\n");
        return 1;

    }

    ofp = fopen("f.txt", "w");
    if (ofp == NULL) {
        printf("���� ����\n");
        return 1;

    }
    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
        if (res==EOF)
        {
            break;
        }
        total = kor + eng + math;
        avg = total / 3.0;
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
    }

    fclose(ifp);
    fclose(ofp);

	system("pause");
	return EXIT_SUCCESS;
}