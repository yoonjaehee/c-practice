#include <iostream>

using namespace std;

int factorial(int i)
{
	int b = 1;
	while(i>0)
	{
		b*=i;
		i--;
	}
	return b;
}

int C(int n,int r)
{
	int p = 0;
	p =  factorial(n)/factorial(n-r)/factorial(r);
	return p;
}

int main()
{
	int n,r,d;
	cout<<"Enter two numbers to compute binomial coefficient: ";
	cin>>n>>r;
	d = C(n,r);
	cout<<d<<endl;
	
	return 0;
}