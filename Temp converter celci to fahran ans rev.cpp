#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

    double farn,cels;
    //cout<<"Enter celsius : ";
    cout<<"Enter tempurature : ";
    //cin>>cels;
    cin>>farn;
    //farn = 1.8*cels+32;
    cels = (farn - 32)/1.8;
    //cout << "Fahrenheit tempurature :  "<<farn;
    cout << "Celcious  tempurature :  "<<cels;
    getch();



}
