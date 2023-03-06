#include<iostream>
using namespace std;
int main()
{
	int a,c=1;
	cout<<"enetr the number to find its factorial :";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		c=c*i;
	}
	cout<<"factorial of given number is :"<<c;
	return 0;
}
	
