#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char name1[]="Shamim ";
    char name2[]="ShamiM ";
    //char name2[30]="I.J.B";
    //int length = strlen(name1);
    //strcpy(name2,name1);
    //strcat(name1,name2);
    //cout<<name1<<endl;
    //cout<<"Length : "<<length<<endl;
    //cout<<name2<<endl;
    //strupr(name1);
    //strlwr(name1);
    //cout<<name1<<endl;
    //cout<<name1<<endl;
    int value=strcmp(name1,name2);
    if(value==0)
        cout<<"String are equal"<<endl;
    else
        cout<<"String are not-equal"<<endl;
    return 0;
}
