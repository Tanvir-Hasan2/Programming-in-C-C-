#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//i=i+2;
    {
        result = result*i*i;//result=result*i*i*i;
    }
    printf("1^2 X 2^2 X 3^2 X .....X %d^2 = %d\n",n,result);
    return 0;
}

