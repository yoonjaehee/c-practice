#include <stdio.h>
int encryption(char num[])
{
	int i=0,p=0;
	char *num1=num;
	while(num[p]!=0)//find the length that final number of array.
	{
		p++;
	}
	for(i=0;i<p;i++)
	{
	if(68 <= *(num1+i) && *(num+i) <= 90)// case (D~Z) > (A~W)
	{
		*(num1+i) -= 3;
		
	}
	else if(64 < *(num1+i) && *(num1+i)< 68) // case (A~C) > (X~Z)
	{
		*(num1+i) += 23;
	}
	}
	return *num1;
}
void comparing(char a[],char b[])
{
	int p=0,t=0;
	char *num1=a;
	char *num2=b;
	while(a[p] != 0)
	{
		p++;
	}
	for(t=0;t<p;t++)
	{
		if(*(num1+t) != *(num2+t))//if the a[?] and b[?] is different, do this code.
		{
		printf("Comparing encrypted strings: %s and %s are not same!\n", b, a);
		printf("Please enter the right password again!\n\n");
		break;
		}
	}
}
int decryption(char num[])//decrypt the password
{
	int i=0,p=0;
	char *num1=num;
	while(num[p]!=0)//find the length that final number of array.
	{
		p++;
	}
	for(i=0;i<p;i++)
	{
	if(88 <= *(num1+i) && *(num+i) <= 90)// case (D~Z) > (A~W)
	{
		*(num1+i) -= 23;
		continue;
		
	}
	else if(64 < *(num1+i) && *(num1+i)< 88) // case (A~C) > (X~Z)
	{
		*(num1+i) += 3;
	}
	}
	return *num1;
}

int main()//start main function
{
	char a[255];
	char *num1=a;//use pointer *num1=a[255]
	char b[255];
	char *num2=b;//use pointer *num2=b[255]
	printf("Set your password: ");
	scanf("%s", a);
	printf("Your password is set: '%s'\n", a);//set the password
	encryption(a);//encrypt the password
	printf("Encrypted password(ASCII code) is: %s\n", a); 
	printf("Your password is saved\n ********************\n");
	while(1)// infinite loof when the password is wrong.
	{
		printf("Enter your password: ");
		scanf("%s", b);
		encryption(b);
		if(*num2==*num1) // if a and b is equal, break the infinite loof.
		{
			printf("Comparing encrypted strings: %s and %s are same!\n", b, a);
			printf("Welcome user!!\n\n");
			break;
		}
		comparing(a,b);//if a and b is different, turn to first step that you enter your password.
	}
	decryption(b);//decrypt the right password
	printf("Your password is %s\n",b);
	return 0;
}