#include <stdio.h>
int main()
{
	int i,p,n,count,v,q;
	printf("Input any integer number: ");
	scanf("%d", &n);
	i=1;
    p=1;
	v=0;
	while(p<n)
	{
		p=p*10;
	}
	while(i<=n){
		count=p/10; // find the biggest digit of n (express 10^p) = count
		while(count>n)
	       {
			count=count/10; // if count>n, the calculate is not operate, so set the range of count
		   }
		while(n/count%10!=1) // the case that digit is not the number "1"
		{
			if(count==1) // if count<1 the calculate doesn't operate, so set the range of count
			{
				break;
			}
		count=count/10; // compare all digit of number
		}
		while(n/count%10==1) // the case that digit is number "1"
		{
			if(count==1) // if count<1 the calculate doesn't operate, so set the range of count
			{
				v=v+1; //if the "1" is exist, +1 to v
				break;
			}
			v=v+1; //if the "1" is exist, +1 to v
		count=count/10;	 // compare all digit of number
		}
	n=n-1; // doing this job 1~n
	}
	printf("%d \n", v);
	printf("Program ended with exit code: 0");
    return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
  








