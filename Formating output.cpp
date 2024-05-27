#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter 2 numbers : ";
    cin>>num1>>num2;

    cout<<showpoint;
    //cout<<noshowpoint;
    cout<<fixed;
    //cout<<setprecision(20);
    cout<<setprecision(2);



     float sum = num1 + num2;
    cout <<setw(20)<< "Sum is : "<<sum<<endl;

        float sub = num1 - num2;
    cout <<setw(20)<<"Subtraction is : "<<sub<<endl;

        float multi = num1 * num2;
    cout <<setw(20)<<"Multiplication is : "<<multi<<endl;


        double div = (float) num1 / num2;
    cout <<setw(20)<<"Division  is : "<<div<<endl;


       // int rem = num1 % num2;
    //cout <<"Remainder is : "<<rem<<endl;

    getch();




}

