#include <stdio.h>
long long dp[101][11];
#define mod 1000000000
int main()
{
	int n;
	long long result=0;
	scanf("%d",&n);
	for(int i=1;i<=9;i++)
		dp[1][i]=1; 
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<=9;j++)
		{
			dp[i][j]=0;
			if(j-1>=0) dp[i][j] += dp[i-1][j-1];
			if(j+1<=9) dp[i][j] += dp[i-1][j+1];
			dp[i][j] %= mod;
		}
	}
	for(int i=0;i<=9;i++)
		result += dp[n][i];
	printf("%lld",result%mod);
}