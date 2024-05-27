#include <stdio.h>

int main()

{

    int H1,H2,M1,M2,Minutes;

    while(1) {

    scanf("%d %d %d %d",&H1,&M1,&H2,&M2);

    if(H1==0 && H2==0 && M1==0 && M2==0)

        break;

    else if(H1<H2 && (M1==M2))

        Minutes = (H2-H1)*60;

    else if(H1<H2 && (M1>M2))

        Minutes = (H2-H1)*60 - M1+M2;

    else if(H1<H2 && (M1<M2))

        Minutes =  (H2-H1)*60 + (M2-M1);

    else if(H1>H2)

        Minutes = ((23-H1)*60+(60-M1))+(H2*60)+M2;

    else if(H1==H2 && (M1<=M2))

    Minutes = M2-M1;

    else if(H1==H2 && (M1>M2))

     Minutes = ((23-H1)*60+(60-M1))+(H2*60)+M2;

    printf("%d\n",Minutes);

    }

return 0;

}
