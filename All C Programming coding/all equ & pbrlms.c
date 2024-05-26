//Type casting
#include<stdio.h>
int main()
{
    int n1,n2,sum,result;
    printf("Enter two numbers = ");
    scanf("%d%d",&n1,&n2);
    result = n1 + n2;
     printf("Sum is = %d\n",result);
     result = n1 - n2;
     printf("Sub is = %d\n",result);
      result = n1 * n2;
     printf("Mul is = %d\n",result);
      result = n1/n2;
     printf("Div  is = %d\n",result);
      result = n1%n2;
     printf("Remainder is = %d\n",result);
    /*float avg;
    //int n2;
    //float n1,sum;
    printf("Enter two numbers = ");
    scanf("%d%d",&n1,&n2);
    //scanf("%f%d",&n1,&n2);
    sum = n1 + n2 ;
     printf("Sum is = %d\n",sum);

    //printf("Sum is = %.2f\n",sum);
    avg = (float) sum/2;
   printf("avg is = %.2f\n",avg);*/


    return 0;

}
