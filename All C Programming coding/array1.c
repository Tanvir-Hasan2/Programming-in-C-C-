#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enter five numbers : ");
    for(i=1;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }

        printf("The sum is : %d\n",sum);
        printf("The average is : %.2f\n",(float)sum/5);//type casting

    return 0;


}
