#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,A[3][4];
    cout<<"Enter the element of the matrix : "<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<< "A ["<<i<<"] ["<<j<<"] = ";
            cin>>A[i][j];

        }
        cout<<endl;
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<<A[i][j] <<" ";

        }
        cout<<endl;
    }
    getch();
}
