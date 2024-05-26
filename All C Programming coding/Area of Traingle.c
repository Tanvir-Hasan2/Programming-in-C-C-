#include<stdio.h>
int main()
{
  float b,h,area;
  printf("Enter two values = ");
  scanf("%f%f",&b,&h);
  area =(float) 1/2*b*h;//.5*b*h;
  printf("Area is = %.2f",area);
  return 0;
}
