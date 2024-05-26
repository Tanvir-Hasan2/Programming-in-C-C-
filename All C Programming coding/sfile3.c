#include<stdio.h>
int main()
{

      char * FN = " Tanvir1.txt ";
      FILE * fp = fopen( FN, " r ");
      char name[100];

      fgets( name,100, fp);
      printf( "%s\n", name);

    fclose(fp);

      return 0;
}


