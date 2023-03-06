#include<iostream>
using namespace std;
int main()
{
  int n,c,d,f;
  cout<<"enter number of days for converting"<<" : ";
  cin>>n;
  c=n/365;
  d=(n%365)/7;
  f=(n%365)%7;
  cout<<n<< " days = ";
  cout<<c<<" years "<<d<<" weeks "<<f<<" days ";
  return 0;
}

