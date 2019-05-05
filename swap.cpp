#include <iostream>

using namespace std;

void swappointer(int *&ptr, int *&ptr2)
{
	int *temp;
	temp = ptr;
	ptr = ptr2;
	ptr2 = temp;
}

int main()
{
	int num1 = 5;
	int *ptr1=&num1;
	int num2 = 10;
	int *ptr2=&num2;
	cout<<*ptr1<<" "<<*ptr2<<endl;
	swappointer(ptr1, ptr2);
	cout<<*ptr1<<" "<<*ptr2<<endl;
	return 0;
}