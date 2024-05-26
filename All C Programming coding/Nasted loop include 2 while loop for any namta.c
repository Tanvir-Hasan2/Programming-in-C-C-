#include<stdio.h>
int main()
{
    int n=1,i=1;
    while(n<=20)
        //n++;
    {
        while(i<=10)
            //i++;
        {
            printf("%d X %d =%d\n",n,i,n*i);
            n++;
            i++;
        }
    }
    return 0;
}
