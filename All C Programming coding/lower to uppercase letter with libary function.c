#include<stdio.h>
int main()
{
    //char lower,upper;
    char lower,upper;
    //printf("Enter any lowercase letter= ");
    printf("Enter any uppercase letter= ");
    //scanf("%c",&lower);
    scanf("%c",&upper);
    //upper = toupper(lower);
    lower = tolower(upper);
    //printf("The uppercase letter is = %c",upper);
    printf("The lowercase letter is = %c",lower);
    return 0;
}
