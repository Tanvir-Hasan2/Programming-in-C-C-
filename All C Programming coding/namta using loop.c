#include<stdio.h>
int main()
{
    int n=5,i=1;
    while(i<=10)
    {
       int vari=i*n;
        printf("%d x %d = %d\n",n,i,vari);
        i=i+1;//i++;
    }

    return 0;

}
