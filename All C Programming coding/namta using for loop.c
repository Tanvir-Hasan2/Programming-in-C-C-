#include<stdio.h>
int main()
{
    int n=5;
    //int i;
    int i=1;
   // for (;i<=10;i++)
    //for (i=1;i<=10;i=i+1)//i++)
for(;;)
    {
        int veri=i*n;
        printf("%dX%d=%d\n",n,i,veri);
        i++;
        if(i>10){
            break;
        }
    }
    return 0;
}
