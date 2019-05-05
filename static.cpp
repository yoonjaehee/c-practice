#include <iostream>

using namespace std;
class LED{
public:
	LED(){
		fCount++;
	};
	void turnOn();
	void turnOff();
	static int fCount;
};
int LED::fCount = 0;
int main()
{
	LED led1,led2;
	cout<<"LED::fCount : " <<LED::fCount<<endl;
	cout<<"LED::fCount : " <<led1.fCount<<endl;
	cout<<"LED::fCount : " <<led2.fCount<<endl;
}