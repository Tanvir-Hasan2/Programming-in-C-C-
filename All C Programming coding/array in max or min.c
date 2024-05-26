#include<stdio.h>
int main()
{
    int n,i,num[100];
    printf("How many number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf( "%d",&num[i] );
    }

    //int max = num[0];
    int min = num[0];
    for(i=0;i<n;i++)
    {
        //if(max<num[i])
        if(min>num[i])
        //max=num[i];
        min=num[i];

    }
    //printf(" Maximum = %d\n",max);
    printf(" Minimum = %d\n",min);

}
