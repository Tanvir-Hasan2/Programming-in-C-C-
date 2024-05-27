#include<bits/stdc++.h>
using namespace std;
int prim(int k)
{
    int fl=0;
    for(int i=2; i<=k/2; i++)
    {
        if(k%i==0)
        {
            fl=1;
            k++;
            return prim(k);
        }
    }
    if (fl==0)
    {
        return k;
    }
}
int main()
{
    int i,j,n,k=2;
    for( i=1; i<=5; i++)
    {
        for( j=1; j<=i; j++ )
        {
            n=prim(k);
            cout<<n<<" ";
            k=n;
            k++;
        }
        cout<<endl;
    }
    return 0;
}
