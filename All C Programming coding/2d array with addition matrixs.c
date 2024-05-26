#include<stdio.h>
int main()
{

    int i,j,nofRow ,nofCol;
    int A[30][30],B[30][30],C[30][30];

    printf("Enter required rows & colmns : \n");
    scanf("%d%d",&nofRow,&nofCol);

    //scanning a matrix
    printf("Enter elements for A matrix. \n ");

    for(i=0; i<nofRow; i++)
    {
        for(j=0; j<nofCol; j++)
        {
            printf("A[%d][%d]= ",i,j );
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }

     //scanning B matrix
    printf("\n\nEnter elements for B matrix. \n ");

    for(i=0; i<nofRow; i++)
    {
        for(j=0; j<nofCol; j++)
        {
            printf("B[%d][%d]= ",i,j );
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }

    //printing a matrix
     printf("A = ");
    for(i=0; i<nofRow; i++)
    {
        printf("\t");

        for(j=0; j<nofCol; j++)
        {
            printf("%d ",A[i][j]);
        }

        printf("\n");
        }


    //printing B matrix
     printf("\nB = ");
    for(i=0; i<nofRow; i++)
    {
         printf("\t");

        for(j=0; j<nofCol; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

//Adding the two matrix....

    for(i=0; i<nofRow; i++)
    {

        for(j=0; j<nofCol; j++)
        {
           C[i][j] = A[i][j] + B[i][j];// -
        }

    }

   //printing C matrix
     printf("\nA + B = ");//-
    for(i=0; i<nofRow; i++)
    {

        for(j=0; j<nofCol; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
}
