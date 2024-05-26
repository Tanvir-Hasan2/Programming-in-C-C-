#include<stdio.h>
int main()
{

    int i,j,A[3][3],sum=0;

    //getting the element for the matrix
    printf("Enter the elements of the matrix \n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //printing the matrix
    printf("\nEntered matrix :\n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Sum of Diagonal matrix

     printf("\n Diagonal elements :");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(i==j)
             {
                 printf("%d ",A[i][j]);
                 sum= sum + A[i][j];
             }

         }

     }
      printf("sum of diagonal elements = %d\n",sum);



}
