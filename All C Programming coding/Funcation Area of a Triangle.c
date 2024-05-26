#include<stdio.h>
double triangleArea(double b, double h);
int main()
{
    double base ,height ;

    printf("Enter base and height : ");

    scanf("%lf%lf",&base ,&height);

    //double area = .5*base*height;
    double area = triangleArea(base,height);

    printf("Area = %.2lf\n",area);

}

double triangleArea(double b, double h)
{
    return .5*b*h;
}
