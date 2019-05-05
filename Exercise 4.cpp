#include <iostream>

using namespace std;

int main()
{
	int a,b,c,g,r;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	while (1)
		{
			if(a<b)
	        {
		             c=a;
		             a=b;
		             b=c;
	        }
			r=a%b;
			if(r==0)
			{
				g=b;
				cout<<"GCD of a and b is "<<g<<endl;
				break;
			}
			a=b;
			b=r;
	    }

	return 0;
}