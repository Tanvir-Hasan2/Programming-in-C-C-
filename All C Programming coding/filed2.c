#include<stdio.h>
int main()
{
      FILE* file;

      file = fopen( " test.txt ", " w ");

      printf( " File is oppened. ");

      fputc( " abfdf  ",file);

      fclose( file );




      return 0;
}

