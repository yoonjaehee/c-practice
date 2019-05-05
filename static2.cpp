#include <iostream>

using namespace std;

class Number{
private:
	static int id;
	int a;
public:
	static int getID();
};
int Number::id = 1;
int Number::getID(){ return id++; };
int main()
{
	for (int i =0;i<5;i++)
	{
		cout<<"ID : "<<Number::getID()<<endl;
	}
	return 0;
}