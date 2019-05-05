#include <stdio.h>
int main()
{
	int i, p, n;
	printf("Input any integer number: ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++) // operate the program between 2<=i<=n
	{
		for (p = 2; p <= i; p++) // operate the program between 2<=p<=i
		{
			if (i%p == 0) // operate the program if i/p's rest is 0.
			{
				if (i == p) //(if the i/p's rest is 0, and i==p) you can find the  prime number as i
				{
					printf("%d \n", i); //print the prime number as i
				}
				break;
			}
		}
	}
	printf("Program ended with exit code: 0");
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
  








