#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a =*b;
	*b = temp;
}
void permute(int *a,int i, int n)
{
	if(i==n)
	{
		for(int j = 0; j<=n; j++)
		{
			cout<<*(a+j);
		}
		cout<<endl;
	}
	else
	{
		for(int j = i;j<=n;j++)
		{
			swap((a+i),(a+j));
			permute(a,i+1,n);
			swap((a+i),(a+j));
		}

	}
}

void permuteNumbers(int n)
{
	int a[33];
	for(int i=1;i<=n;i++)
	{
		a[i-1]=i;
	}
	permute(a,0,n-1);
}
int main()
{
	permuteNumbers(4);
	return 0;
}