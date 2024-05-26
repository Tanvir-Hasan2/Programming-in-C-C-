#include<stdio.h>
int main()
{
    int inNum,fiNum,temp,i,r,sum=0;
    printf("Enter inNum  number : ");
    scanf("%d",&inNum);
    printf("Enter fiNum number : ");
    scanf("%d",&fiNum);
    for (i=inNum; i<=fiNum; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum = sum + r*r*r;
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\n",i);
    sum = 0;
    }



}
