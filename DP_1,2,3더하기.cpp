#include <stdio.h>
int dp[100001];
int main()
{
	int n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t);
		dp[1]=1;
		dp[2]=2;
		dp[3]=4;
		for(int i=4;i<=t;i++)
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		printf("%d\n",dp[t]);
	}
}