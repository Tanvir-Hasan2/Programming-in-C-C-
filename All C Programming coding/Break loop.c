#include<stdio.h>
int main()
{
    int n=1;
    while (n<=10000                                                                                                                          )
    {
        printf("%d\n",n++);
        if(n>1000){
            break;
        }

    }
        return 0;

}
