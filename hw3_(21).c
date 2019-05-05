#include <stdio.h>
void armstrong(void) // armstrong local function
{
    int n, j, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    j = n;

    while (j != 0)
    {
        i = j%10;
        sum += i*i*i;
        j /= 10;
    }
// sum is sum of each digit's three square. 
    if(sum == n)
        printf("%d is an Armstrong n. \n",n);
    else
        printf("%d is not an Armstrong n. \n",n);
}

	int sorting(void) // sorting local function.
{
	int a,b,c,d,e,f;
	printf("Input three number from 0 to 99 \n");
	printf("Input 1st number: ");
	scanf("%d", &a);
	if(a>=100 || a<=0)
	{
		printf("%d is out of range\n", a);
		return 0;
	}
	printf("Input 2nd number: ");
	scanf("%d", &b);
	if(b>=100 || b<=0)
	{
		printf("%d is out of range\n", b);
		return 0;
	}
	printf("Input 3rd number: ");
	scanf("%d", &c); 
	if(c>=100 || c<=0)
	{
		printf("%d is out of range\n", c); 
		return 0;
	} //choose 3 number of input.
	if (a>b) 
	{   
      d=a;    
      e=b;   
    } 
	else 
	{
      d=b;  
      e=a;  
    }  //choose bigger number in a,b 
   if (d>c) 
   { 
      f=d;    
      if(e>c)
	  {         
         d=e;                
         e=c;
      }
	  else 
	  {
         d=c;      
      }         
   }// choose bigger number in a,b and compare to c. 
   else 
	   f=c; 

   printf("%d ", e); // smallest number
   printf("%d ", d); // middle number
   printf("%d ", f);  // biggest number

   getchar(); 
}    

void Dec2Binary(unsigned int nDecimal) // If input decimal number, converting to binary number.
{
    if(nDecimal<2)
    {
        printf("%I64u", nDecimal);
    }
    else
    {
        Dec2Binary(nDecimal/2);
        printf("%I64u", nDecimal%2);
    }
}

int converting(void) // choose the decimal number to input.
{
	int num;
	printf("Input one integer number from 0 to 99: ");
	scanf("%d", &num);
	Dec2Binary(num);
    
}

int main()
{
	int number=0;
	char no;
	while(1)
	{
	printf("*****************\n1.Armstrong number identification\n2.Sorting (Ascending)\n3.Decimal to binary \n4.Exit \n***************** \n");
	printf("Select menu: "); //selecting menu.
	scanf("%d", &number);
		if(number==1)
		{
			armstrong();
			printf("Do you want to return to main menu? (y/n)");
			getchar();
	        scanf("%c", &no);
	        if(no=='n')
	       {
		      printf("Bye!");
		      break;
	       }
	        else
	       {
		      continue;
	       }
        }

		else if(number==2)
		{
			sorting();
			printf("Do you want to return to main menu? (y/n)");
			getchar();
	        scanf("%c", &no);
	        if(no=='n')
	       {
		      printf("Bye!");
		      break;
	       }
	        else
	       {
		      continue;
	       }
        }
		else if(number==3)
		{
			converting();
			printf("Do you want to return to main menu? (y/n)");
			getchar();
	        scanf("%c", &no);
	        if(no=='n')
	       {
		      printf("Bye!");
		      break;
	       }
	        else
	       {
		      continue;
	       }
        }
		else if(number==4)
		{
			printf("Bye! \n");
			break;
		}
		else // enter except 1,2,3,4 case.
		{
			printf("You entered wrong number! \n");
			continue;
		}
	}
 return 0;
}

	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
  








