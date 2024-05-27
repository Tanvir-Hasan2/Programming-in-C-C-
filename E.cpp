#include <iostream>
using namespace std;

int main()

{

    int H1,H2,M1,M2,minute;

    while(1) {
    cin>>H1>>H2>>M1>>M2;

    if(H1==0&&H2==0&&M1==0&&M2==0)

        break;

    else if(H1<H2 && (M1==M2))

        minute = (H2-H1)*60;

    else if(H1<H2 && (M1>M2))

        minute = (H2-H1)*60 - M1+M2;

    else if(H1<H2 && (M1<M2))

        minute =  (H2-H1)*60 + (M2-M1);

    else if(H1>H2)

        minute = ((23-H1)*60+(60-M1))+(H2*60)+M2;

    else if(H1==H2 && (M1<=M2))

    minute = M2-M1;

    else if(H1==H2 && (M1>M2))

     minute = ((23-H1)*60+(60-M1))+(H2*60)+M2;

   cout<<minute<<endl;

    }
    return 0;
}

