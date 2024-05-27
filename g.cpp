#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
    int a,b,c,Asq,Bsq,Csq;
        cin>>a>>b>>c;
        if(a==b==c==0)
            break;
        Asq = a*a;
        Bsq = b*b;
        Csq = c*c;
        if((Asq+Bsq==Csq)||(Bsq+Csq==Asq)||(Csq+Asq==Bsq))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;


    }



    return 0;
}
/*#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,c,asqure,bsqure,csqure;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a==0&&b==0&&c==0)break;
        asqure = a*a;
        bsqure =b*b;
        csqure =c*c;
        if((asqure+bsqure==csqure)||(bsqure+csqure==asqure)||(csqure+asqure==bsqure))
        printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}*/
