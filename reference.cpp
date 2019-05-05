#include <iostream>

using namespace std;


void printaddress(const int &param)
{
	cout<<&param<<endl;
}
void swap (int &ref, int &ref2)
{
	int temp = ref;
	ref=ref2;
	ref2=temp;
}
int main()
{
	int a = 5;
	int b = 7;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	const int n = 10;
	printaddress(n);
	cout<<n<<endl;
}