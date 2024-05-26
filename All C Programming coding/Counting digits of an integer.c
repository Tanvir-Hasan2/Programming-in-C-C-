#include<stdio.h>
int main()
{
    int n,count = 0;
    printf("Enter any Integer : ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;

    }
    printf("Total digits : %d\n",count);

}
