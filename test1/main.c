

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
	int a = 0;
	int b = 0;
	int res;
	res = a + b;

	char c = 0;

	
	scanf("%d %c %d", &a, &c, &b);
	/*switch (c)
	{
		case 
	default:
		break;
	}*/ {
		
		printf("%d + %d = %d\n", a, b, a + b);
	}


	system("pause");
	return EXIT_SUCCESS;
}