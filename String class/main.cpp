#include <iostream>

using namespace std;

int main()
{
   string str1 = "BbB";
   string str2 = " SsS";
   string str3;
   str3=str1;
   cout<<"str3 : "<<str3<<endl;
   str3=str1 + str2;
   cout<<"str1+str2 : "<<str3<<endl;
   int len = str1.size();
   cout<<" Length of str1 : "<<len<<endl;





    return 0;
}
