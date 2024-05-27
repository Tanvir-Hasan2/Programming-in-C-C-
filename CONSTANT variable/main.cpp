#include <iostream>
#include "myclassdemo.h"
using namespace std;

int main()
{
    const MyClassdemo ob;
    ob.display1();
     MyClassdemo ob2;
    ob2.display2();
    //const int x=20;
    //x=40;never use it because const function.
   // cout<<x<<endl;
    return 0;
}
