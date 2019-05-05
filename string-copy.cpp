#include <iostream>
#include <cstring>

using namespace std;

class Printer
{
private:
	char savest[100];
public:
	void Setstring(char *s);
	void ShowString();
};

int main(void)
{
	Printer pnt;
	pnt.Setstring("Hello world!");
	pnt.ShowString();

	pnt.Setstring("I love C++");
	pnt.ShowString();
	return 0;
}

void Printer::Setstring(char *s)
{
	strcpy(savest, s);
}

void Printer::ShowString()
{
	cout<<savest<<endl;
}