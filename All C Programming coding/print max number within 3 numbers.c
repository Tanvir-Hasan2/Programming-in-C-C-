//Using logic AND...
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("Large number is a = %d\n",a);
    else if(b>a && b>c)
        printf("Large number is b = %d\n",b);
    else if(c>a && c>b)
        printf("Large number is c = %d\n",c);
    else
        printf("Numbers are Equal");
    return 0;
}
