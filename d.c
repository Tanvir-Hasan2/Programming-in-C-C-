#include<stdio.h>
int main()
{
	int p,i;
	scanf("%d",&p);
	for(i=1;i<=p;i++){
		long long int a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b<=c || b+c<=a || a+c<=b || (a<=0 || b<=0 || c<=0))
			printf("Case %d: Invalid\n",i);
		else if(a==b && b==c)
			printf("Case %d: Equilateral\n",i);
		else if(a==b || b==c || a==c)
			printf("Case %d: Isosceles\n",i);
		else
			printf("Case %d: Scalene\n",i);
	}
	return 0;
}
