/*#include<stdio.h>
int main()
{
    int n=1;
    //n=n+1;
    //printf("%d\n",n);
    printf("%d\n",n++);
    printf("%d\n",n++);
    printf("%d\n",n++);
   // printf("1\n2\n3\n4\n5\n6\n7\n8\n10\n");
   printf("%d\n",n++);
    printf("%d\n",n++);
   printf("%d\n",n++);
   printf("%d\n",n++);
   printf("%d\n",n++);
   printf("%d\n",n++);
  printf("%d\n",n++);
    return 0;
}*/
//Using while loop...
#include<stdio.h>
int main()
{
    int n=1;
    while(n<=1000000)
    {
        printf("%d\n",n++);
    //n++;
    }
    return 0;
}
