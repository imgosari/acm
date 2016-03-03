#include <stdio.h>
int gcd(int a, int b) // 유클리드 호제법으로 gcd구하기
{
	if(b==0)
		return a;
	else
		gcd(b, a%b);
}
int main()
{   
	int a,b,g;
	scanf("%d %d",&a,&b);
	g=gcd(a,b);
	printf("%d",g);
	//printf("%d\n%d", g,g*(a/g)*(b/g)); 
}