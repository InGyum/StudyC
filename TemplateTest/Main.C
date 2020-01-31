#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>


int main() {
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");
	// type here

	printf("%d\n",10);
	printf("%lf\n",3.1);
	printf("%1.lf\n",3.14);
	printf("%.10lf\n",3.145924426);

	printf("%d과 %d의 합은 %d입니다.\n", 10,20,10+20);
	printf("%.1lf-%.1lf=%.1lf\n",3.4,1.2,3.4-1.2);
	system("pause");

	return 0;
}