#include<iostream>
using namespace std;

void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
    addition(10,3);
    subtraction(10,3);
    multiplication(10,3);
    division(10,3);


    return 0;
}
void addition(int a, int b)
{
    int sum = a+b;
    cout <<" Sum = "<<sum<<endl;
}
void subtraction(int a, int b)
{
    int sub = a-b;
    cout <<"Subtraction = "<<sub<<endl;
}
void multiplication(int a, int b)
{
    int multi = a*b;
    cout <<"Multiplication = "<<multi<<endl;
}
void division(int a, int b)
{
   float div= (float) a/b;
    cout <<" Division = "<<div<<endl;
}
