#include<iostream>
//#include <stdio.h>
using namespace std;

int main()

{

    int h1,h2,m1,m2,minutes;

    //while(1) {

    //scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    while((cin>>h1>>h2>>m1>>m2) != EOF){
    if(h1==0&&h2==0&&m1==0&&m2==0)

        break;

    else if(h1<h2 && (m1==m2))

        minutes = (h2-h1)*60;

    else if(h1<h2 && (m1>m2))

        minutes = (h2-h1)*60 - m1+m2;

    else if(h1<h2 && (m1<m2))

        minutes =  (h2-h1)*60 + (m2-m1);

    else if(h1>h2)

        minutes = ((23-h1)*60+(60-m1))+(h2*60)+m2;

    else if(h1==h2 && (m1<=m2))

    minutes = m2-m1;

    else if(h1==h2 && (m1>m2))

     minutes = ((23-h1)*60+(60-m1))+(h2*60)+m2;

    //printf("%d\n",minutes);
    cout<<minutes<<endl;
    }





}

