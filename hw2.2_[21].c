#include <stdio.h>
int main()
{
	int a, b;
	char c;
	printf("Input two intergers formula : ");
	scanf("%d %c %d", &a, &c, &b); //using Ascii code for formula
	if (c == 43) { // case "+" 
		printf("%d \n", a + b);
	}
	else if (c == 45) { // case "-"
		printf("%d \n", a - b);
	}
	else if (c == 42) { // case "*"
		printf("%d \n", a*b);
	}
	else if (c == 47) { // case "/"
		printf("%d \n", a / b);
	}
	else { printf("it cannot be calculated"); } // if other arithmetic operation, print it cannot be calculated.
	return 0;
}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
  








