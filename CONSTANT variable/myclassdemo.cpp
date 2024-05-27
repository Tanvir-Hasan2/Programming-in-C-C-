#include "myclassdemo.h"
#include <iostream>

using namespace std;

void MyClassdemo ::display1() const
{
    cout<<" I am a constant function"<<endl;
}
void MyClassdemo ::display2()
{
    cout<<" I am a non-constant function"<<endl;
}

