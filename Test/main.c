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

//struct list
//{
//    
//    double i;
//    struct list* previous;
//    struct list* next;
//    
//};
//
//int main(void) 
//{
//    int n;
//    struct list a = { 1.1, 0 }, b = { 2.2, 0 }, c = { 3.3, 0 };
//    struct list* head = &a, * current;
//
//    a.next = &b;
//    b.next = &c;
//
//    printf("1. %.1lf\n", head->i);
//    printf("2. %.1lf\n", a.next->i);
//    printf("3. %.1lf\n", b.next->i);
//
//   /* printf("list all : ");
//    current = head;
//    while (current != NULL)
//    {
//        printf("%.1lf  ", current->i);
//        current = current->next;
//
//    }*/
//    while (head)
//    {
//        if (head->next==n)
//        {
//            head = head->next;
//        }
//        printf("%d\n", head->i);
//        head=head->next;
//    }
//    
//
//    printf("\n");
//   
//
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}


//1��

/*int i = 0;
int j;
j = 3;
int sum = 0;

for (int i = 0; i <= 100; i++)
{
    sum = sum + (i * j);
}
printf("%d", sum);*/

//2��

/*int i=0;

printf("������ �Է��Ͻÿ� : ");
scanf("%d", &i);

if (i)
{
    if (90<=i)
    {
        printf("A\n");
    }
    else if (70<=i<90)
    {
        printf("B\n");
    }
    else if (60 <= i < 69)
    {
        printf("C\n");
    }
    else if (50 <= i <= 59)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}*/

//3��

/* int score[3][3];
 int math, eng, kor;
 int sum;
 double avg;

 int i,j;


 for (int i = 0; i < 3; i++)
 {
     printf("3���� ������ �Է��Ͻÿ� : ");
     for (int j = 0; j < 3; j++)
     {
         scanf("%d", &score[i][j]);
     }



 }
 for (int i = 0; i < 3; i++)

 {
     sum = 0;
     for (int j = 0; j < 3; j++)
     {
         sum += score[i][j];
     }


     avg = sum / 3;
 printf("���� %d , ��� %.2lf\n", sum,avg);

 }*/
//3��

//typedef struct student
//{
//    char name[80];
//    int kor;
//    int eng;
//    int math;
//    int total;
//    double avg;
//    double allavg;
//}Student;
//
//void main()
//{
//    double i;
//    Student student;
//    for (dou i = 0; i < 3; i++)
//    {
//
//
//        printf("-------���� �Է�-------\n");
//        printf("�̸� �Է� : \n");
//        scanf("%s", student.name);
//        printf("���� ���� �Է� : \n");
//        scanf("%d", &student.kor);
//        printf("���� ���� �Է� : \n");
//        scanf("%d", &student.eng);
//        printf("���� ���� �Է� : \n");
//        scanf("%d", &student.math);
//    
//
//    printf("\n");
//
//    student.total = student.eng + student.kor + student.math;
//    student.avg = student.total / 3;
//
//
//    printf("*******  ���� ���   ******** \n");
//
//    printf("�̸� :   %s\n", student.name);
//    printf("���� ���� : %d\n", student.kor);
//    printf("���� ���� : %d\n", student.eng);
//    printf("���� ���� : %d\n", student.math);
//    printf("���� ���� : %d\n", student.total);
//    printf("���� ��� : %.2lf\n", student.avg);
//   
//    }
//    
//
//    printf("%.2lf", student.allavg);
//
//    return 0;
//}

//struct Node
//{
//    int n;
//    struct Node* next;
//};
//
//void showMenu();
//void printNodes(struct Node* p);
//void freeNodes(struct Node* p);
//
//void main() {
//    // �����Լ����� ����� �⺻ ���� ���� 
//    int flag = 1;
//    int input;
//
//    struct Node* head;//���� ����Ʈ�� ù ���Ҹ� ������ ������ ���� head
//    struct Node* last;//������ ������ �ּҸ� ������ last ����
//    struct Node* node;//�߰��� ����� �ּҸ� �ӽ÷� ������ ������ ���� node 
//
//    //���� �߰��� ��尡 ���� ������, Head �� last �� �ʱⰪ�� NULL �� ����
//    head = NULL;
//    last = NULL;
//
//    //����� �Է��� 0 �� �� ������, �ݺ� ����
//    while (flag) {
//        //�޴��� ��� ��, ������� �Է��� input ������ ����
//        showMenu();
//        scanf("%d", &input);
//
//        //����� �Է��� 0�̸�, flag ���� 0���� �ٲٰ�, while �ݺ����� ����
//        if (input == 0) {
//            flag = 0;
//        }
//        else {//����� �Է��� 0�� �ƴϸ�, ��带 ���� ����Ʈ�� �߰�
//
//           //Node ����ü�� ���� �Ҵ�
//            node = (struct Node*)malloc(sizeof(struct Node));
//
//            //������ Node ����ü�� ���� ����
//            node->n = input;
//            node->next = NULL;
//
//            //���� ����Ʈ�� ������� ���, head�� ������ node �� �ּҸ� ����
//            if (head == NULL) {
//                head = node;
//            }
//            else { //���� ����Ʈ�� ������� ���� ���, ������ ����� next�� ������ node�� �ּҸ� ����
//                last->next = node;
//            }
//
//            //���� ����Ʈ�� �߰��� node�� �ּҸ� last�� ����
//            last = node;
//        }
//    }
//
//    //���� ����Ʈ�� ����� ���� ȭ�鿡 ����ϰ�, ���� ���� �޸𸮸� ��� ����
//    printNodes(head);
//    freeNodes(head);
//}
//
//void showMenu() {
//    printf("������ ������ �Է�/����:0 : ");
//}
//
//void printNodes(struct Node* p) {
//    //p�� NULL �ƴ� ��� = ������ ��尡 �ƴ� ���
//    while (p != NULL) {
//        //��忡 ����� ���� ����ϰ�, ���� ���� �̵�
//        printf("%d\n", p->n);
//        p = p->next;
//    }
//}
//
//void freeNodes(struct Node* p) {
//    struct Node* temp;//���� ����� �ּҸ� �ӽ� ������ temp ����
//    while (p != NULL) {//���� ����Ʈ�� �� ���� �ݺ�
//        temp = p;//���� ��带 �ӽú����� ����
//        p = p->next;//���� ���� �̵�
//        free(temp);//�ӽú����� ����� ���� ��带 ����
//    }
//}


typedef struct student
{
    int i, j;
    int total;
    int score[3][5];
    double avg;
    double allavg;

}student;

int main()
{
    student s1;
    printf("-------- ���� �Է� --------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            scanf("%d", &s1.score[i][j]);

        }
    }

    for (int i = 0; i < 3; i++)
    {
        s1.total = 0;
        for (int j = 0; j < 3; j++)
        {
            s1.total += s1.score[i][j];
        }
        s1.avg = s1.total / 3;
        
        printf("���� : %d , ��� : %.2lf\n", s1.total, s1.avg);
    
    }
   
    s1.allavg += s1.avg / 3;
    printf("��ü ��� : %.2lf", s1.allavg);
    return 0;
}