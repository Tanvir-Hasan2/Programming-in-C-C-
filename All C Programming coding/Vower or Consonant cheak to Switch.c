#include<stdio.h>
int main()
{
    char  ch ;
    printf("Enter any Letter = ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'o':
    case 'u':
        printf("The Letter is Vowel");
        break;
    default:
        printf("The Letter is Consonant");
    }
}
