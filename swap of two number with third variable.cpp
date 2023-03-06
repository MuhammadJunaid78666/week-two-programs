#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0;
	cout<<"enetr the value of first number :";
	cin>>a;
	cout<<"enter the value of second number :";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"swap numbers are "<<a<<"\t"<<b<<endl;
	return 0;
}
