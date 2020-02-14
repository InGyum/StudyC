/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - 김인겸ㄴ.
*/

#include <stdio.h>
#include <stdlib.h>
// 메인함수

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


//1번

/*int i = 0;
int j;
j = 3;
int sum = 0;

for (int i = 0; i <= 100; i++)
{
    sum = sum + (i * j);
}
printf("%d", sum);*/

//2번

/*int i=0;

printf("점수를 입력하시오 : ");
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

//3번

/* int score[3][3];
 int math, eng, kor;
 int sum;
 double avg;

 int i,j;


 for (int i = 0; i < 3; i++)
 {
     printf("3과목 점수를 입력하시오 : ");
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
 printf("총합 %d , 평균 %.2lf\n", sum,avg);

 }*/
//3번

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
//        printf("-------성적 입력-------\n");
//        printf("이름 입력 : \n");
//        scanf("%s", student.name);
//        printf("국어 점수 입력 : \n");
//        scanf("%d", &student.kor);
//        printf("영어 점수 입력 : \n");
//        scanf("%d", &student.eng);
//        printf("수학 점수 입력 : \n");
//        scanf("%d", &student.math);
//    
//
//    printf("\n");
//
//    student.total = student.eng + student.kor + student.math;
//    student.avg = student.total / 3;
//
//
//    printf("*******  성적 출력   ******** \n");
//
//    printf("이름 :   %s\n", student.name);
//    printf("국어 점수 : %d\n", student.kor);
//    printf("영어 점수 : %d\n", student.eng);
//    printf("수학 점수 : %d\n", student.math);
//    printf("점수 총합 : %d\n", student.total);
//    printf("점수 평균 : %.2lf\n", student.avg);
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
//    // 메인함수에서 사용할 기본 변수 선언 
//    int flag = 1;
//    int input;
//
//    struct Node* head;//연결 리스트의 첫 원소를 저장할 포인터 변수 head
//    struct Node* last;//마지막 원소의 주소를 저장할 last 변수
//    struct Node* node;//추가될 노드의 주소를 임시로 저장할 포인터 변수 node 
//
//    //아직 추가된 노드가 없기 때문에, Head 와 last 의 초기값을 NULL 로 설정
//    head = NULL;
//    last = NULL;
//
//    //사용자 입력이 0 이 될 때까지, 반복 수행
//    while (flag) {
//        //메뉴를 출력 후, 사용자의 입력을 input 변수에 저장
//        showMenu();
//        scanf("%d", &input);
//
//        //사용자 입력이 0이면, flag 값을 0으로 바꾸고, while 반복문을 종료
//        if (input == 0) {
//            flag = 0;
//        }
//        else {//사용자 입력이 0이 아니면, 노드를 연결 리스트에 추가
//
//           //Node 구조체를 동적 할당
//            node = (struct Node*)malloc(sizeof(struct Node));
//
//            //생성된 Node 구조체에 값을 설정
//            node->n = input;
//            node->next = NULL;
//
//            //연결 리스트가 비어있을 경우, head에 생성된 node 의 주소를 저장
//            if (head == NULL) {
//                head = node;
//            }
//            else { //연결 리스트가 비어있지 않을 경우, 마지막 노드의 next에 생성된 node의 주소를 저장
//                last->next = node;
//            }
//
//            //연결 리스트에 추가된 node의 주소를 last에 저장
//            last = node;
//        }
//    }
//
//    //연결 리스트에 저장된 값을 화면에 출력하고, 사용된 동적 메모리를 모두 해제
//    printNodes(head);
//    freeNodes(head);
//}
//
//void showMenu() {
//    printf("저장할 정수를 입력/종료:0 : ");
//}
//
//void printNodes(struct Node* p) {
//    //p가 NULL 아닌 경우 = 마지막 노드가 아닌 경우
//    while (p != NULL) {
//        //노드에 저장된 값을 출력하고, 다음 노드로 이동
//        printf("%d\n", p->n);
//        p = p->next;
//    }
//}
//
//void freeNodes(struct Node* p) {
//    struct Node* temp;//다음 노드의 주소를 임시 저장할 temp 변수
//    while (p != NULL) {//연결 리스트의 끝 까지 반복
//        temp = p;//지울 노드를 임시변수에 저장
//        p = p->next;//다음 노드로 이동
//        free(temp);//임시변수에 저장된 이전 노드를 해제
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
    printf("-------- 점수 입력 --------\n");
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
        
        printf("총점 : %d , 평균 : %.2lf\n", s1.total, s1.avg);
    
    }
   
    s1.allavg += s1.avg / 3;
    printf("전체 평균 : %.2lf", s1.allavg);
    return 0;
}