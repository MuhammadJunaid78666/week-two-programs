#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number"<<" : ";
	cin>>a;
	if(a>0)
	{
		cout<<"you entered an positive number";
	}
	else if(a<0)
	{
		cout<<"you entered an negative number";
	}
	else
	{
		cout<<"you entered zero";
	}
	return 0;
	
}
