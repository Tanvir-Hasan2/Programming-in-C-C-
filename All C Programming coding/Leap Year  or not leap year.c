#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year ");
    scanf("%d",&year);
    if( year%400==0 )
        printf("This year is Leap year");
    else if(year%4==0 && year%100 != 0)
        printf("This year is Leap year");
    else
        printf("This year is Not Leap year");
    return 0;
}
