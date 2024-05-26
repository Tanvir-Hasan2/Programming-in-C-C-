#include<stdio.h>
int main()
{
      char * FN = " Tanvir1.txt ";
      FILE * fp = fopen( FN, " w ");

      fputs( "Life is Beautiful ", fp);
      fclose( fp );

      return 0;
}

