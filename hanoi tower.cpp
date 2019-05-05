#include <iostream>

using namespace std;

void tower(int n, char b, char c, char d)
{
	if(n<=1)
	{
		cout<<"move disk 1 from "<<b<<" to "<< c << endl;
	}
	else
	{
		tower(n-1,b,d,c);
		cout<<"move disk "<<n<<" from "<<b<<" to "<<c<<endl;
		tower(n-1,c,b,d);
	}
}
int main()
{
	tower(3,'A','B','C');
	return 0;
}