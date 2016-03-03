#include <stdio.h>
int gcd(int a, int b)
{
	if(b) return gcd(b,a%b);
	else return a;
}

int main()
{
	int n,m,a,b;
	scanf("%d %d",&n,&m);
	int g=gcd(n,m);  
	a=n/g;
	b=m/g;
	printf("%d",n*(b-1)/a);
}