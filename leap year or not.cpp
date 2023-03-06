#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter a year "<<" : ";
  cin>>n;
  if (n%4==0)
  {
  	cout<<"you enterd leap year";
  	
  }
  else
  {
  	cout<<n<< " is not leap year";
  }
  
  return 0;
}
