#include <iostream>

using namespace std;

class Calculator
{
    private:
		int Addstate;
		int Divstate;
		int Minstate;
		int Mltstate;
	public:
		int Init();
		double Add(double a, double b);
		double Div(double a, double b);
		double Min(double a, double b);
		double Mlt(double a, double b);
		void ShowOPCount();
};

int main(void)
{
	Calculator cal;
	cal.Init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
	cal.ShowOPCount();
	return 0;
}

int Calculator::Init()
{
	Addstate=0;
	Divstate=0;
	Minstate=0;
	Mltstate=0;
	return 0;;
}

double Calculator::Add(double a, double b)
{
	double c;
	c = a + b;
	Addstate++;
	return c;
}

double Calculator::Div(double a, double b)
{
	double c;
	c = a / b;
	Divstate++;
	return c;
}

double Calculator::Min(double a, double b)
{
	double c;
	c = a - b;
	Minstate++;
	return c;
}

double Calculator::Mlt(double a, double b)
{
	double c;
	c = a * b;
	Mltstate++;
	return c;
}

void Calculator::ShowOPCount()
{
	cout<<"µ¡¼À: "<<Addstate<<" »¬¼À: "<<Minstate<< " °ö¼À: "<<Mltstate<<" ³ª´°¼À: "<<Divstate<<endl;
}