#include<stdio.h>

// Global structure
struct person
{
    int age;
    float salary;

};

int main()
{

    struct person person1,person2;

    person1.age= 25;
    person1.salary=1000;

    printf("Person1 info: \n");
    printf("\tAge = %d\n",person1.age);
    printf("\tSalary = %.2f\n",person1.salary);


    person2.age= 26;
    person1.salary=1010;


    printf("\nPerson2 info: \n");
    printf("\tAge = %d\n",person2.age);
    printf("\tSalary = %.2f\n",person2.salary);


}
