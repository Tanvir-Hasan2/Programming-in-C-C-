#include<stdio.h>
int main()
{
    int n,a=1;
    float sum=0,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(a/i);
       if(i==1)
       printf("\n1 + ");

       else if(i==n)
       printf("(1/%lf)",i);

       else
       printf("(1/%lf) + ",i);
    }
    printf(" = %.2f\t",sum);
}

