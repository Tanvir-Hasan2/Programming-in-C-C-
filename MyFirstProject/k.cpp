#include<iostream>
using namespace std;
void ternary(long long int n)
{
    int mod =n%3;
    n=n/3;
    if(n!=0)
    {
        ternary(n);
        cout<<mod;
    }
    else
        cout<<mod;
}

int main()
{
  long long int n;
  while(cin>>n)
  {
      if(n<0)
        break;

      ternary(n);
      cout<<endl;



  }
  return 0;
}
