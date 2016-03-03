#include <stdio.h>
int memo[100];
int memo2[100];
int top_down(int n)
{
	if(n<=1)
		return n;
	if(memo[n]>0)
		return memo[n];
	memo[n] = top_down(n-2)+top_down(n-1);
	return memo[n];
}
int bottom_up(int n)
{
	memo2[0]=0;
	memo2[1]=1;
	for(int i=2;i<=n;i++)
		memo2[i]=memo2[i-1]+memo2[i-2];
	return memo2[n];
}
int main()
{
	//printf("%d\n", top_down(10));
	printf("%d\n", bottom_up(10));
}