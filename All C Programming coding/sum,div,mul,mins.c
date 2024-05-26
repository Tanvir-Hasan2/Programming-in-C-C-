//#include<stdio.h>
//int main()
//{
    //int num1,num2,sum,mins,div,multi;
    //double num1,num2,sum,mins,div,multi;
    //printf("please enter a number:");
    //scanf("%d",&num1);
    //scanf("%lf",&num1);
    //printf("please enter another  number:");
    //scanf("%d",&num2);
   // scanf("%lf",&num2);
   //sum=num1+num2;
   // mins=num1-num2;
    //div=num1/num2;
    //multi=num1*num2;
    //printf("%d+%d=%d\n",num1,num2,num1+num2);
    //printf("%d-%d=%d\n",num1,num2,num1-num2);
    //printf("%d*%d=%d\n",num1,num2,num1*num2);
    //printf("%d/%d=%d\n",num1,num2,num1/num2);
    //printf("sum is %d\n",sum);
    //printf("sum is %lf\n",sum);
    //printf("mins is %d\n",mins);
    //printf("mins is %lf\n",mins);
    //printf("div is %d\n",div);
    //printf("div is %lf\n",div);
    //printf("multi is %d\n",multi);
   // printf("multi is %lf\n",multi);
    //return 0;
//}
#include<stdio.h>
int main()
{
int num1, num2, value;
char sign;
printf("Please enter a number: ");
scanf("%d", &num1);
printf("Please enter another number: ");
scanf("%d", &num2);
value = num1 + num2;
sign = '+';
printf("%d %c %d = %d\n", num1, sign, num2, value);
value = num1 - num2;
sign = '-';
printf("%d %c %d = %d\n", num1, sign, num2, value);
value = num1 * num2;

sign = '*';
printf("%d %c %d = %d\n", num1, sign, num2, value);
value = num1 / num2;
sign = '/';
printf("%d %c %d = %d\n", num1, sign, num2, value);
return 0;
}
