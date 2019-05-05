#include <iostream>

using namespace std;

void increase(int &a, int &b)
{
	a++;
	b++;
}

int main()
{
	int a,b;
	cout<<"point the number: ";
	cin>>a>>b;
	increase(a, b);
	cout<<a<<b<<endl;
	return 0;
}
