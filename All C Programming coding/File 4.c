#include<stdio.h>
int main()
{
    FILE *file;
    char name [30];
    int age;

     file = fopen("test.text","w");

     if(file==NULL)
     {
         printf("File does not exist ");
     }

     else
     {
         printf("File is opend\n");

         printf("Enter your full name : ");
         gets(name);
         printf("Enter your age : ");
         scanf("%d",&age);

         printf(file,"Name = %s, Age = %d\n",name,age);
         printf("File is written successfully\n");
         fclose(file);

     }




}
