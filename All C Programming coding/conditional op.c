#include<stdio.h>
int main()
{
    int a,b,large;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    large = (a>b)? a : b;
    printf("Large number = %d\n,large");
    return 0;
}
