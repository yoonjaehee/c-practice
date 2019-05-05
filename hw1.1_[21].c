#include <stdio.h>
int main()
{
	int a;
	printf("Enter 3-digit number: ");
	scanf("%d", &a);
	printf("1st digit:%d \n", a / 100); // express (a/100) for integer
	printf("2nd digit:%d \n", (a % 100) / 10); // express (a/100)'s remainder ¡æ divide 10 
	printf("3rd digit:%d \n", (a % 100) % 10); // express (a/100)'s remainder ¡æ divide 10 ¡æ express result's remainder 
	printf("Program ended with exit code: 0");
	return 0;
}

