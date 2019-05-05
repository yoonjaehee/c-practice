#include <iostream>

using namespace std;

void change(int &a, int &b)
{
	a*=-1;
	b*=-1;
}
int main()
{
	int a,b;
	cout<<"print the number: ";
	cin>>a>>b;
	change(a, b);
	cout<<a<<" "<<b<<endl;
	return 0;
}