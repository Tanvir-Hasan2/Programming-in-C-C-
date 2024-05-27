#include<stdio.h>
int main()
{
    int a,b,c,Asq,Bsq,Csq;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
            break;

        Asq = a*a;
        Bsq = b*b;
        Csq = c*c;

        if((Asq+Bsq==Csq)||(Bsq+Csq==Asq)||(Csq+Asq==Bsq))
        printf("right\n");

        else
            printf("wrong\n");
    }
    return 0;
}
