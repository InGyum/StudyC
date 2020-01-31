#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/*
	char fruit[20] = "strawberry";
	
	printf("딸기 : %s\n", fruit);
	printf("딸기잼 : %s %s\n", fruit, "jam");
	
	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);
	

	int income = 0;
	double tax;
	const  double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);
	
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d %lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);
	*/

	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);


	system("pause");

	return 0;
}