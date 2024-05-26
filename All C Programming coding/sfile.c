#include<stdio.h>
int main()
{
      char * FN = " Tanvir.txt ";
      FILE * fp = fopen( FN, " w ");

      for( int i=1; i<=50; i++ )

            if( i%2==0 )
                  fprintf( fp, "%d\n", i );
            fclose( fp );
      return 0;
}
