#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result = result*i;
    }
    printf("1*2*3*4*.....*%d5 = %d\n",n,result);
    return 0;
}
