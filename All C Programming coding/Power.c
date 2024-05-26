#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter any numbers = ");
  scanf("%d%d",&x,&y);
  double result = pow (x,y);
  printf("%.2lf\n",result);
  return 0;
}
