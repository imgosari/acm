#include <stdio.h>
long long dp[91];
int n;
int main()
{
	scanf("%d",&n);
	dp[1]=1;
	dp[2]=1;
	dp[3]=2;
	for(int i=4;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];
	printf("%lld",dp[n]);
}