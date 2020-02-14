/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - 김인겸.
*/

#include <stdio.h>

struct namecard
{
    char name[10];
    char adr[20];
    char phone[13];
};

struct namecard customer[100];

char get_menu(void);
int input_business_card(void);
void show_all_cards(void);
void search_business_card_previous(void);
void search_business_card_next(void);
void delete_business_card(void);
void edit_business_card(void);
void save(char*);
int load(char*);

int index = -1; 
int num = 0;

int main()
{


    while (1)
    {
        switch (get_menu())
        {
        case '1':
            printf("입력.\n");
            input_business_card();
            break;
        case '2':
            printf("읽기.\n");
            show_all_cards();
            break;
        case '3':
            printf("수정.\n");
            edit_business_card();
            break;
        case '4':
            printf("삭제.\n");
            delete_business_card();
            break;
        case '5':
            printf("다음.\n");
            search_business_card_next();
            break;
        case '6':
            printf("이전 메뉴.\n");
            search_business_card_previous();
            break;
        case '7':
            save("D:\2020\studyC\exam01\card_data.txt");
            break;
        case '8':
            num = load("D:\2020\studyC\exam01\card_data.txt");
            index = num - 1;
            break;
        case '9':
            printf("종료.\n");
            return 0;
        default:
            printf("잘못된 메뉴.\n");
            break;
        }
    }
    return 0;
}

char get_menu(void)
{
    char menu = ' ';
    printf(" 메뉴를 입력.\n");
    printf("1.입력, 2.읽기, 3.수정, 4.삭제, 5.다음, 6.이전, 7.저장, 8.불러오기, 9.종료:");
    menu = getchar();
    fflush(stdin);
    return menu;
}

int input_business_card(void)
{
    system("cls");
    printf("이름:");
    scanf("%s",customer[num].name);
    printf("이메일:");
    scanf("%s",customer[num].adr);
    printf("번호:");
    scanf("%s",customer[num].phone);
    printf("\t%d번째 저장.\n", num);
    

    num++;
    index++;
}

void show_all_cards(void)
{
    if (index < 0)
    {
        printf("\t입력된 데이터가 없습니다.");
        system("pause");
        system("cls");
        return;
    }

    system("cls");
    printf("\t%d 번째 .\n", index);
    printf("\t이름 : %s\n", customer[index].name);
    printf("\t이메일 : %s\n", customer[index].adr);
    printf("\t전화번호 : %s\n", customer[index].phone);
}

void search_business_card_previous(void)
{
    if (index == 0)
    {
        printf("\t정보.\n");
        system("pause");
        system("cls");
        return;
    }
    index--;
    show_all_cards();

}
void search_business_card_next(void)
{
    if (index == num - 1)
    {
        printf("\t마지막 정보입니다. 이후 자료가 없습니다.\n");
        system("pause");
        system("cls");
        return;
    }
    index++;
    show_all_cards();
}
void delete_business_card()
{
    int i = 0;
    for (i = index; i < num; i++)
    {
        customer[i] = customer[i + 1];
    }
    num--;
    if (index == num)
    {
        index--;
        printf("\t%d번째 삭제.\n", num);
    }
}
void edit_business_card(void)
{
    system("cls");

    printf("\t%d번째 정보 수정.=============\n", index);
    printf("\t이름은 %s 입니다.\n", customer[index].name);
    printf("\t이메일 : ");
    scanf("%s",customer[index].adr);
    printf("\t번호 :");
    scanf("%s", customer[index].phone);

    fflush(stdin);

    printf("\t%d번재 정보 수정.\n", index);
}

void save(char* namecard)
{
    FILE* fout = fopen("card_data", "w");
    int i;
    for (i = 0; i < num; i++)
    {
        fprintf(fout, "%s %s %s\n",
            customer[i].name, customer[i].adr, customer[i].phone);
    }
    printf("\t\t데이터가 저장.\n");

    fclose(fout);
}

int load(char* namecard)
{
    FILE* fin = fopen("card_data", "r");
    int i = 0;
    if (fin == NULL)
    {
        printf("\t\t파일이 존재하지 않습니다.\n");
        return 0;
    }
    while (!feof(fin))
    {
        fscanf(fin, "%s %s %s\n",
            customer[i].name, customer[i].adr, customer[i].phone);
        i++;
    }
    printf("\t\t데이터가 로드.\n");
    fclose(fin);
    return i;
}

