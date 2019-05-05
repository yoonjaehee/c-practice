#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
	}
};

class Circle
{
private:
	int rad;
	Point center;
public:
	void Init(int x, int y, int r)
	{
		rad = r;
		center.Init(x, y);
	}

	void ShowCircleInfo() const
	{
		cout<<"radius: "<<rad<<endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle incircle;
	Circle outCircle;
public:
	void Init(int a, int b, int c, int d, int e, int f)
	{
		incircle.Init(a, b, c);
		outCircle.Init(d, e, f);
	}

	void ShowRingInfo() const
	{
		cout<<"Inner Circle Info..."<<endl;
		incircle.ShowCircleInfo();
		cout<<"Outter Circle Info..."<<endl;
		outCircle.ShowCircleInfo();
	}
};

int main()
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
    return 0;
}