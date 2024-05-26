//Using without Library function ......
#include<stdio.h>
int main()
{
    //char lower;
    char upper;
    //printf("Enter any lowercase letter = ");
    printf("Enter any uppercase letter = ");
    //scanf("%c",&lower);
    scanf("%c",&upper);
    //printf("The uppercase letter is = %c",lower -32);
    printf("The lowercase letter is = %c",upper + 32);
    return 0;
}
