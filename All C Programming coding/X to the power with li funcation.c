#include<stdio.h>
void calculatePower(double base,double exp)
{
double result=1,i;

 for(i=1;i<=exp;i++)
    {
        result= result*base;
    }


    printf("Result = %.2lf\n",result);
}

int main()


/*{
    double base ,exp,result;
    printf("Enter base and exponent :");
    scanf("%lf%lf",&base,&exp);
    result = pow(base,exp);
    printf("Result = %.2lf\n",result);
}//
{

    double base ,exp,result=1,i;

    printf("Enter base and exponent :");
    scanf("%lf%lf",&base,&exp);

    for(i=1;i<=exp;i++)
    {
        result= result*base;
    }


    printf("Result = %.2lf\n",result);


}*/
{

    double base ,exp;

    printf("Enter base and exponent :");

    scanf("%lf%lf",&base,&exp);

    calculatePower(base,exp);

}
