#include<stdio.h>
int main()
{
    int n1,n2,num1,num2,rem,gcd;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;


    }
    gcd=n1;
    printf("GCD = %d\n",gcd);


    getch();
}
