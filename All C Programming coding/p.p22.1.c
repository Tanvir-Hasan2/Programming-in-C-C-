#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter n : ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("%d ",col);
        for(col=row-1;col>=1;col--)
            printf("%dj",col);
        printf("\n");

    }
    return 0;
}

