#include<stdio.h>
#include<math.h>
int main()
/*{
    //float a,b,c,s,area;
    double a,b,c,s,area;
    printf("Enter values = ");
    //scanf("%f%f%f",&a,&b,&c);
    scanf("%lf%lf%lf",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    //printf("Area of Traingale = %.2f\n",area);
    printf("Area of Traingale = %.2lf\n",area);
    return 0;
}*/
// Area of Rectangle .....
/*{
    float length,width,area;
    printf("Enter two values = ");
    scanf("%f%f",&length,&width);
    area = length*width;
    printf("Area of Rectangle is = %.2f\n",area);
    return 0;
}*/
{
    float r,area;
    printf("Enter the value or Radius = ");
    scanf("%f",&r);
    //area = 3.1416*r*r;
    area = M_PI*r*r;
    printf("Area of Circle is = %.2f\n",area);
    return 0;
}
