#include<stdio.h>
int main()
{
    double A,B,temp;
    scanf("%lf",&A);
    scanf("%lf",&B);
    temp = (A+B)/(int) 2;
    printf("MEDIA = %.5lf\n",temp);
    return 0;
}
