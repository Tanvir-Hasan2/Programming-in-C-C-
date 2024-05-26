#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        r = temp%10;
        sum = sum+ r;
        temp=temp/10;
    }
    if(n ==sum)
    printf("The number is palindrome  : %d\n",sum);
    else
        printf("The number is not Palindrome");
    return 0 ;
}

