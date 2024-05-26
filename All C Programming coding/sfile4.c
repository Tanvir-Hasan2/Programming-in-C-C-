#include<stdio.h>
int main()
{
      FILE * file;
      char ch[40];
      file = fopen( "test.txt", "r");
      while( !feof(file))
      {
            fgets( ch, 39, file );
            printf( "%")
      }



      return 0;
}
