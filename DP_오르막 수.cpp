#include <stdio.h>
long long dp[1001][11];
int main()
{
	int n;
	long long result=0;
	for(int i=0;i<=9;i++)
		dp[1][i]=1LL;
	scanf("%d",&n);
	for(int i=2;i<=n;i++) // 몇 자리 수 인가
	{
		for(int j=0;j<=9;j++) // 0~9까지 돌림
		{
			for(int k=0;k<=j;k++) // 수는 오르막으로 증가해야 하니까 k는 0부터 j까지 돈다.
			{
				dp[i][j]+=dp[i-1][k];
				dp[i][j] %= 10007;
			}
		}
	}
	for(int i=0;i<=9;i++)
		result += dp[n][i];
	printf("%lld", result%10007);
}