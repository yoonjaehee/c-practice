#include <iostream>
#include <cstring>

const int NAME_LEN=20;
using namespace std;

void makeaccount(void);
void putmoney(void);
void accountInfo(void);
void withdraw(void);

typedef struct
{
	int id;
	int balance;
	char name[NAME_LEN];
}Account;

Account a[100];
int anum=0;

int main()
{
	using namespace std;
	while(1)
	{
		int num;
		cout<<"------------Menu------------"<<endl;
		cout<<"1.make a account"<<endl;
		cout<<"2.put the money"<<endl;
		cout<<"3.print the account's information"<<endl;
		cout<<"4.pick the money"<<endl;
		cout<<"5.exit the program"<<endl;
		cout<<endl;
		cout<<"Select the menu: ";
		cin>>num;
		if(num==1)
		{
			makeaccount();
		}
		else if(num==2)
		{
			putmoney();
		}
		else if(num==3)
		{
			accountInfo();
		}
		else if(num==4)
		{
			withdraw();
		}
		else if(num==5)
		{
			cout<<"Exit the program"<<endl;
			break;
		}
	}
	return 0;
}

void makeaccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout<<"[Make a acoount]"<<endl;
	cout<<"Account ID: ";cin>>id;
	cout<<"Name: ";cin>>name;
	cout<<"Balance: ";cin>>balance;
	cout<<endl;

	a[anum].id = id;
	a[anum].balance = balance;
	strcpy(a[anum].name, name);
	anum++;

}



void putmoney(void)
{
	int money;
	int id;
	cout<<"Deposit"<<endl;
	cout<<"Account ID: "; cin>>id;
	cout<<"Fix your money ";
	cin>>money;

	for(int i=0;i<anum;i++)
	{
		if(a[i].id == id)
		{

			a[i].balance+=money;
			cout<<"Deposit of money is completed"<<endl;
			return;
		}
	}
	cout<<"Nonvalue of ID"<<endl;

}

void withdraw(void)
{
	int money;
	int id;
	cout<<"Withdraw"<<endl;
	cout<<"Account ID: "; cin>>id;
	cout<<"Fix your money ";
	cin>>money;

	for(int i=0;i<anum;i++)
	{
		if(a[i].id == id)
		{
			if(a[i].balance<money)
			{
				cout<<"We cannot withdraw the money because of your rest of money in account"<<endl;
				return ;
			}

			a[i].balance-=money;
			cout<<"Withdraw money is completed"<<endl;
			return;
		}
	}
	cout<<"Nonvalue of ID"<<endl;


}

void accountInfo()
{
	cout<<"print all user's information"<<endl;
	for(int i=0;i<anum;i++)
	{
		cout<<"Account's ID: "<<a[i].id<<endl;
		cout<<"Account's Name: "<<a[i].name<<endl;
		cout<<"Account's Balacne: "<<a[i].balance<<endl;
	}
}
