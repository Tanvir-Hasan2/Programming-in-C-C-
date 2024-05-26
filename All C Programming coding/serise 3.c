/*#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;
    printf("Enter n1 & n2 : ");
    scanf("%d%d",&n1,&n2);
    while(a<=n1 && b<=n2)

    {
        sum=sum+a*b;
       a++;
       b++;
    }
    printf("1*2 + 2*3 + 3*3 .....  + %d = %d\n",n1*n2,sum);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n1,n2,n3,sum=0,a=1,b=2,c=3;
    printf("Enter n1 & n2 & n3 : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    while(a<=n1 && b<=n2 && c<=n3)

    {
        sum=sum+a*b*c;
       a++;
       b++;
       c++;
    }
    printf("1*2*3 + 2*3*4 + ....  + %d = %d\n",n1*n2*n3,sum);
    return 0;
}

