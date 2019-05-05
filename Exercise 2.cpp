#include <iostream>

using namespace std;

int main()
{
	int a,b,c,largest;
	cout<<"Enter three integers"<<endl;
	cin>>a>>b>>c;
	largest = a;
	if (b > largest) { largest = b; }
	if (c > largest) { largest = c; }
	cout<<largest<<endl;
	return 0;
}