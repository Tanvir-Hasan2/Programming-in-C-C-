#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;

    cout<<"Enter number of students : ";
    cin>>n;
    int students[n];
    //input
    for(i=0;i<n;i++)
    {
        cout<<"Marks for student "<<i+1<<" = ";
        cin>>students[i];
        sum = sum+students[i];
    }
    cout<<endl<<"Total marks : "<<sum<<endl;
    float avg = (float) sum/n;
    cout<<"Average : "<<avg<<endl;

    //maximum minimum

    int max = students[0];
    int min = students[0];

    for(i=1;i<n;i++)
    {
        if(max <students[i])
        {
            max = students[i];
        }
        if(min>students[i])
        {
            min = students[i];
        }
    }
    cout<<"Maximum marks = "<<max<<endl;
    cout<<"Minimum marks = "<<min<<endl;





    getch();
}
