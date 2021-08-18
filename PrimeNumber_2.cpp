#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i , flag=0;  
  cout << "Enter the Number: ";  
  cin >> n;  
    
  for(i = 2; i <= n-1; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Not Prime"<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Prime"<<endl;  
  return 0;  
}  