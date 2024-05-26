#include<stdio.h>
int main()
{
    int x=10,y=20;
    int *p1 ,*p2;
    p1=&x;
    p2=&y;

    int sum =*p1+*p2;//-+*/ etc
    printf("Sum = %d\n",sum);



}
