/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - ���ΰ�.
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
            printf("�Է�.\n");
            input_business_card();
            break;
        case '2':
            printf("�б�.\n");
            show_all_cards();
            break;
        case '3':
            printf("����.\n");
            edit_business_card();
            break;
        case '4':
            printf("����.\n");
            delete_business_card();
            break;
        case '5':
            printf("����.\n");
            search_business_card_next();
            break;
        case '6':
            printf("���� �޴�.\n");
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
            printf("����.\n");
            return 0;
        default:
            printf("�߸��� �޴�.\n");
            break;
        }
    }
    return 0;
}

char get_menu(void)
{
    char menu = ' ';
    printf(" �޴��� �Է�.\n");
    printf("1.�Է�, 2.�б�, 3.����, 4.����, 5.����, 6.����, 7.����, 8.�ҷ�����, 9.����:");
    menu = getchar();
    fflush(stdin);
    return menu;
}

int input_business_card(void)
{
    system("cls");
    printf("�̸�:");
    scanf("%s",customer[num].name);
    printf("�̸���:");
    scanf("%s",customer[num].adr);
    printf("��ȣ:");
    scanf("%s",customer[num].phone);
    printf("\t%d��° ����.\n", num);
    

    num++;
    index++;
}

void show_all_cards(void)
{
    if (index < 0)
    {
        printf("\t�Էµ� �����Ͱ� �����ϴ�.");
        system("pause");
        system("cls");
        return;
    }

    system("cls");
    printf("\t%d ��° .\n", index);
    printf("\t�̸� : %s\n", customer[index].name);
    printf("\t�̸��� : %s\n", customer[index].adr);
    printf("\t��ȭ��ȣ : %s\n", customer[index].phone);
}

void search_business_card_previous(void)
{
    if (index == 0)
    {
        printf("\t����.\n");
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
        printf("\t������ �����Դϴ�. ���� �ڷᰡ �����ϴ�.\n");
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
        printf("\t%d��° ����.\n", num);
    }
}
void edit_business_card(void)
{
    system("cls");

    printf("\t%d��° ���� ����.=============\n", index);
    printf("\t�̸��� %s �Դϴ�.\n", customer[index].name);
    printf("\t�̸��� : ");
    scanf("%s",customer[index].adr);
    printf("\t��ȣ :");
    scanf("%s", customer[index].phone);

    fflush(stdin);

    printf("\t%d���� ���� ����.\n", index);
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
    printf("\t\t�����Ͱ� ����.\n");

    fclose(fout);
}

int load(char* namecard)
{
    FILE* fin = fopen("card_data", "r");
    int i = 0;
    if (fin == NULL)
    {
        printf("\t\t������ �������� �ʽ��ϴ�.\n");
        return 0;
    }
    while (!feof(fin))
    {
        fscanf(fin, "%s %s %s\n",
            customer[i].name, customer[i].adr, customer[i].phone);
        i++;
    }
    printf("\t\t�����Ͱ� �ε�.\n");
    fclose(fin);
    return i;
}

