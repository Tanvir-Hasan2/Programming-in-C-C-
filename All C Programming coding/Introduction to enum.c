#include<stdio.h>

enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};
int main()
{

    enum days_of_week day1,day2;
    day1=Tue;
    day2=Wed;
    int diff = day2-day1;
    printf("Day1= %d\n",day1);
    printf("Day2= %d\n",day2);
    printf("Difference = %d\n",diff);


}
