#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],i,j,r1,c1,r2,c2,k,sum=0;

    printf("Enter rows & column for the first matrix ");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows & column for the second matrix ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! column of first matrix are not equal to row of second \n");


        printf("Enter rows & column for the first matrix ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows & column for the second matrix ");
        scanf("%d %d",&r2,&c2);


    }

    //scanning first matrix

    printf("Enter elements for first matrix :\n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] = ",i,j);

            scanf("%d",&first[i][j]);
        }



    }

    //scanning second matrix

    printf("Enter elements for second matrix\n ");

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }

    }
    //multiplying matrix

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum + first[i][k]*second[k][j];

            }
            result[i][j] = sum;
            sum=0;
        }
    }



    //printing first matrix

    printf("\nfirst = \n");

    for(i=0; i<r1; i++)

    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    //printing second matrix

    printf("\n\n second \n");

    for(i=0; i<r2; i++)

    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }

    //printing result  matrix

    printf("\n\n Result matrix\n");

    for(i=0; i<r1; i++)

    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


}
