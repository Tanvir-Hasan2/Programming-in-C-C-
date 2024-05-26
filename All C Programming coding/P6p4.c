#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        //print space
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        //print number
        for(col=1;col<=row;col++)
        {
            printf("%c",row+64);//96
        }
        printf("\n");

    }

    for(row=n-1; row>=1; row--)
    {
        //print space
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        //print number
        for(col=1;col<=row;col++)
        {
            printf("%c",row+64);//96
        }
        printf("\n");

    }
    return 0;
}

