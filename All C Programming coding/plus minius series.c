 #include<stdio.h>
int main()
{
    int n,i,odd=1,even=1,sum;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    sum=odd-even;
    printf("1-2+3-4+.....-%d = %d\n",n,sum);
    return 0;
}

