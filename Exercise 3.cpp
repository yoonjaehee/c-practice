#include <iostream>

using namespace std;

int main()
{
	int b=0;
	while(1)
	{
		int a;
		cout<<"Enter the number"<<endl;
		cin>>a;
		b+=a;
		cout<<"Sum is : "<<b<<endl;
		if(a==0)
		{
			cout<<"Terminate the process."<<endl;
			break;
		}
	}
	return 0;
}