#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double sum=0,n;
    cout<<"Enter last number : ";
    cin>>n;
    for(double i=1;i<=n;i++)
    {
        sum= sum+(1/i);

    }
    cout<<sum;

    getch();

}
