#include<iostream>
using namespace std;
int main()
{
  
  int n, i, m=0, 
  j=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<n<<" Number is not Prime."<<endl;  
          j=1;  
          break;  
      }  
  }  
  if (j==0)  
      cout << n<<" Number is Prime."<<endl;  
  return 0;  
} 
