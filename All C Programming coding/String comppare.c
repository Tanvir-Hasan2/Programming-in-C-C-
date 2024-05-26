#include<stdio.h>
int main()
{
    char str1[]="T.H.S";
    char str2[]="T.H.S";

    int d = strcmp(str1,str2);

    if (d==0)
    {
        printf("String are Equal ");

    }
    else
    {
        printf("String are not Equal ");
    }


}
