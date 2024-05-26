#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("\n Name : %s\n",p.name);
    printf("\n Age : %d\n",p.age);
    printf("\n Salary  : %.2f\n",p.salary);
}

int main()
{
    struct person person1 ,person2;

    strcpy(person1.name ,"Tanvir Hasan Shamim");
    person1.age = 20;
    person1.salary = 20000.50;
    display(person1);

    strcpy(person2.name ,"Israt Jahan");
    person2.age = 17;
    person2.salary = 22000.50;
    display(person2);





}
