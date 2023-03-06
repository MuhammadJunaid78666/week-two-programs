#include<iostream>
using namespace std;
int main()
{
	int a,i,c;
	cout<<"enter the first number "<<" : ";
	cin>>a;
	cout<<"enter the second number "<<" : ";
	cin>>i;
		cout<<"enter the third number "<<" : ";
		cin>>c;
		if(a>i&&a>c)
		{
			cout<<"first number is greater";
		}
		else if(i>a&&i>c)
		{
			cout<<"second number is greater";
		}
		else
		{
			cout<<"third number is greater"; 
		}
		return 0;
	}
	
