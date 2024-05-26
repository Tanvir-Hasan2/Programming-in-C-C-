#include<stdio.h>
int main()
{
    int num,i,temp,fact,sum=0,rem;
    printf("Enter any integer number :");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=rem; i<=rem; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;

    }
    if(sum==num)
        printf("This is a STRONG number : %d\n",sum);
    else
        printf("This is not a STRONG number ");

}
