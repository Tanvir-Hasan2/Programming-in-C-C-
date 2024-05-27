#include<iostream>
using namespace std;

int x=20;//global variable because use before main funcation

int main()
{
    int x=10;//local varible
    ::x=30;
    cout<<::x<<endl;


    return 0;
}

