#include<stdio.h>
/*int main()
{
    typedef char LETTER;
    LETTER ch;
    ch='a';
    printf("ch = %c\n",ch);

    LETTER CH1;
    CH1 = 'B lv';
    printf("CH1 = %c\n",CH1);
}*/

struct book
{
    char name[20];
    int price;
};

int main()
{
    typedef struct book Book;
    Book b = {"Debdas",543};

    printf("Book name = %s\n",b.name);
    printf("Book price = %d\n",b.price);
}
