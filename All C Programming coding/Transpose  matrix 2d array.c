#include<stdio.h>
int main()
{
    int i,j,row,col,First[10][10],Transpose[10][10];

    printf("Enter number of Rows  & Columns of the Matrix :\n ");
    scanf("%d%d",&row,&col);

    //scanning the elements of the matrix

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("First[%d][%d] = ",i,j);
            scanf("%d",&First[i][j]);
        }
    }
    //printing the matrix
    printf("First matrix\n");

    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",First[i][j]);
        }
        printf("\n");
    }

    //Transpose

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           Transpose[j][i]=First[i][j];
        }
    }

        //printing the Transpose  matrix
    printf("\n\n Transpose matrix\n");

    for(i=0;i<col;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
        {
            printf("%d ",Transpose[i][j]);
        }
        printf("\n");
    }

}
