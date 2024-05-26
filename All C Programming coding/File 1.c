#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("text.txt","w");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is oppend");
    fclose(file);
    }


}
