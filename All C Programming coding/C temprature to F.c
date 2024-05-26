#include<stdio.h>
int main()
{
    //float C,F;
    float C,F;
   //printf("Enter Centigrade Temperature = ");
    printf("Enter Temperature = ");
    //scanf("%f",&C);
    scanf("%f",&F);
    //F = (1.8*C) + 32;
    C = (5*C - 160)/9;// any equations use users..
    C = (F - 32)/1.8;
    //printf("Farn = %.2f\n ", F);
    printf( "%.2f\n ", C);
    return 0;
}
