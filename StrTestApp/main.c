/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// 메인함수
int main(void)
{
    /* int age;
     char name[20];

     printf("나이 입력 : ");
     scanf("%d", &age);
     getchar();
     printf("이름 입력 : ");
     gets(name);
     printf("나이 : %d, 이름 : %s\n", age, name);
     */
     /*
         char str1[80] = "strawberry";
         char str2[80] = "apple";
         char* ps1 = "banana";
         char* ps2 = str2;

         printf("최초 문자열 : %s\n", str1);
         strcpy(str1, str2);
         printf("바뀐 문자열 : %s\n", str1);

         strcpy(str1, ps1);
         printf("바뀐 문자열 : %s\n", str1);

         strcpy(str1, ps2);
         printf("바뀐 문자열 : %s\n ", str1);

         strcpy(str1, "banana");
         printf("바뀐 문자열 : %s\n", str1);
         */

         /*char str[20] = "mango tree";

         strncpy(str, "apple", 5);

         printf("%s\n", str);
         */
         /*
         char str[80] = "straw";

         strcat(str, "berry");
         printf("%s\n", str);

         strcat(str, "pie",3);
         printf("%s\n", str);
         */

         /*
         char str1[80], str2[80];
         char* resp;

         printf("2개의 과일 이름 입쳑 : ");
         scanf("%s%s", str1, str2);
         if (strlen(str1) > strlen(str2))
             resp = str1;
         else
             resp = str2;
         printf("이름이 긴 과일은 : %s\n", resp);
         */
    char str1[80];
    char str2[80];
    char* resp;
    while (1) {

        printf("2개의 과일 이름 입쳑 : ");
        scanf("%s %s", str1, str2);
        if (str1[0] == 'X' || str2[0] == 'X') { break; }
        else if (strlen(str1) > strlen(str2)){
        
                        resp = str1;

        }
        else {
            resp = str2;
        }
        printf("이름이 긴 과일은 : %s\n", resp);
    }

        
    
       
    


    // type here.
	system("pause");
	return EXIT_SUCCESS;
}