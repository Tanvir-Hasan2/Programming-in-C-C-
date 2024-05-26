#include<stdio.h>
int main()
{
    FILE *file;
    char name [30];
    file = fopen("text.txt","w");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is oppend\n");
        printf("Enter your name: ");
        gets(name);
        fputc(name,file);
        printf("File is written successfully\n");
        fclose(file);
    }
    getch();

}



