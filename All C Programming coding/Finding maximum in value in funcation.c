#include<stdio.h>

int maximum(int x[])
{
    int i,max=x[0];
    for(i=0;i<5;i++)
    {
        if(x[0]<x[i])
            max=x[i];
    }
    return max;
}
int main()
{
    int num[]={60,20,30,40,50};

    int maximumValue=maximum(num);

    printf("%d\n",maximumValue);


}

