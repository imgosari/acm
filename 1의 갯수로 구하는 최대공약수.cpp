// https://www.acmicpc.net/problem/1850
#include <stdio.h>
long long gcd(long long a, long long b) 
{
	if(b==0)
		return a;
	else
		gcd(b, a%b);
}
int main()
{
	long long g,a,b;
	scanf("%lld %lld",&a,&b);
	g=gcd(a,b);
	for(long long i=0;i<g;i++)
		printf("1");
}