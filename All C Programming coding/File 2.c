#include<stdio.h>
int main()
{
    FILE *file;
    char name [30]="Tanvir Hasan and I.J.B";
    int length = strlen(name);
    int i;
    file = fopen("text.txt","w");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is oppend\n");

        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully\n");


    fclose(file);
    }
    getch();

}

