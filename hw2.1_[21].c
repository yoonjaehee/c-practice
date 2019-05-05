#include <stdio.h>
int main()
{
	int n,q;
	printf("Input an interger (larger than 16) : ");
	scanf("%d", &n);
	printf("Entered integer %d is converted to hex num %08x. \n", n,n); // %08x=represent hex humber in 8digits and fill the rest of code to 0
	q=16*16*16*16*16*16*16*16-n;  //q is 2's complement of hex number
	printf("2's complement of hex num %08x is %08x. \n", n,q);
	return 0;
}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
  








