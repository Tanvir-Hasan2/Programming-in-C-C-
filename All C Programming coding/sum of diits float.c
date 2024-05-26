#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("Enter n: ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%.2f\t",sum);
}

