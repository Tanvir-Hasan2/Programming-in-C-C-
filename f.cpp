#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,n;
    char word[101];
    while (cin>>i)
    {
        while(i--)
        {
            //gets(word);
            cin>>word;
            n=strlen(word);
            if(n>10)
                cout<<word[0]<<n-2<<word[n-1]<<endl;
            else
            cout<<word<<endl;
        }
    }



    return 0;
}
/*#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,k;
    char c[101];
    while(cin>>n)
    {
        while(n--)
        {
            cin>>c;
            k=strlen(c);
            if(k>10)
                cout<<c[0]<<k-2<<c[k-1]<<endl;
            else
                cout<<c<<endl;
        }
    }
    return 0;
}*/


