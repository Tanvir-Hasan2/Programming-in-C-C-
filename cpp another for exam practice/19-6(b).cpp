#include<bits/stdc++.h>
using namespace std;
int staticFun(){
cout<<"static variable: ";
static int count = 0;
count++;
return count;
}
int nonStaticFun()
{
      cout<<" For Non-Static variable : ";
      int count =0;
      count ++;
      return count;
}
int main()
{
      cout<<staticFun()<<endl;
      cout<<staticFun()<<endl;
      cout<<staticFun()<<endl;
      cout<<nonStaticFun()<<endl;
      cout<<nonStaticFun()<<endl;
      return 0;
}
