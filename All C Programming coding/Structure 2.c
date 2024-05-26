#include<stdio.h>

// Global structure
struct person
{
    int age;
    float salary;

};

int main()
{

    struct person person1={23,23000};

    struct person person2,person3;

    person2.age= 26;
    person2.salary=1010.35;

    person3=person2;

    printf("Person1 info: \n");
    printf("\tAge = %d\n",person1.age);
    printf("\tSalary = %.2f\n",person1.salary);


    printf("\nPerson2 info: \n");
    printf("\tAge = %d\n",person2.age);
    printf("\tSalary = %.2f\n",person2.salary);

    printf("Person3 info: \n");
    printf("\tAge = %d\n",person3.age);
    printf("\tSalary = %.2f\n",person3.salary);
}

