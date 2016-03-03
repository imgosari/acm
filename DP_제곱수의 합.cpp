#include <stdio.h> 
int dp[100001];
int n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		dp[i]=i;
		for(int j=1;j*j<=i;j++) 
		{
			if( dp[i] > dp[i-(j*j)]+1)
				dp[i]=dp[i-(j*j)]+1;
		}
	} 
	printf("%d",dp[n]);
}