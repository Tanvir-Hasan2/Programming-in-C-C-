#include<stdio.h>
int main()
{
      FILE* file;
      file = fopen( " file.txt " ," w ");
      printf( " File is oppened. ");
      fclose( file );




      return 0;
}
