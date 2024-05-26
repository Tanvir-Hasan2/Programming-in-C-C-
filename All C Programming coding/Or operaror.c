//Enter a letter to check vowel or constant.
#include<stdio.h>
int main()
{
   char ch;
   printf("enter a letter:",ch);
   scanf("%c",&ch);
   if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
   {
       printf("The letter is Vowel %c\n",ch);
   }
   else
    {
    printf("The letter is consonant%c\n",ch);
   }
   return 0;
}
