#include<stdio.h>
int main()
{

    int i,j,A[3][4],B[3][4];


    //scanning a matrix
    printf("Enter elements for A matrix. \n ");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d]= ",i,j );
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }

    //printing a matrix
     printf("A = ");
    for(i=0; i<3; i++)
    {
        printf("\t");

        for(j=0; j<4; j++)
            printf("%d ",A[i][j]);

        printf("\n");


    }
     //scanning B matrix
    printf("\n\nEnter elements for B matrix. \n ");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("B[%d][%d]= ",i,j );
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }

    //printing B matrix
     printf("B = ");
    for(i=0; i<3; i++)
    {
         printf("\t");

        for(j=0; j<4; j++)
            printf("%d ",B[i][j]);

        printf("\n");


    }
}

