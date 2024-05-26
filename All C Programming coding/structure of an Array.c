#include<stdio.h>

struct person
{
    int age ;
    float salary;
};
int main()
{
    struct person person[4];
    int i;

    for(i=0;i<4;i++)
    {
    printf("Enter info for person %d\n",i+1);
    printf("\tEnter Age = ");
    scanf("%d",&person[i].age);
    printf("\tEnter salary = ");
    scanf("%f",&person[i].salary);
    }

for(i=0;i<4;i++)
    {
    printf("\nInfo for person %d\n",i+1);
    printf("\t Age = %d\n",person[i].age);
    printf("\t salary = %.2f\n",person[i].salary);
    }


    getch();
}

