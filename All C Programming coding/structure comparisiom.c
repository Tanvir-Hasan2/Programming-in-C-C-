#include<stdio.h>

struct person
{
    int age ;
    float salary;
};
int main()
{
    struct person person1={27,2550.25};

    struct person person2,person3;

    person2.age=25;
    person2.salary=2559.50;

    person3=person2;

    //compare 1 & 2 person
    //if(person1.age==person2.age && person1.salary==person2.salary)

    //person 2 & 3 comparisiom

    if(person2.age==person3.age && person2.salary==person3.salary)

       // printf("person1 and person2 are equal\n");

        printf("person2 and person3 are equal\n");
    else

        //printf("person1 and person2 are not equal\n");


        printf("person2 and person3 are not equal\n");



}
