#include<stdio.h>
int main()
{
    int n,i,sum=0;;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        printf("%d\t = %d\n",i,sum);
    }
}

