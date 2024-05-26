#include<stdio.h>

struct person
{
    char name[50];
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
    printf("\tEnter name: ");
    fflush(stdin);
    gets(person[i].name);
    printf("\tEnter Age = ");
    scanf("%d",&person[i].age);
    printf("\tEnter salary = ");
    scanf("%f",&person[i].salary);
    }

for(i=0;i<4;i++)
    {
    printf("\t Name : %s\n",person[i].name);
    printf("\nInfo for person %d\n",i+1);
    printf("\t Age = %d\n",person[i].age);
    printf("\t salary = %.2f\n",person[i].salary);
    }


    getch();
}


