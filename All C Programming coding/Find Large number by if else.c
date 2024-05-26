#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter any two integer numbers = ");
    scanf("%d%d",&n,&m);
    if(n>m)
        printf("Large = %d\n",n);
    else if(n<m)
        printf("Large = %d\n",m);
    else
        printf("Number are equal ");
    return 0;
}
