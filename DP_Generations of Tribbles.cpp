#include <stdio.h>
long long int dp[71];
void mdp()
{
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(int i=4;i<=70;i++)
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4];
}
int main()
{
	mdp();
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		printf("%lld\n",dp[t]);
	}
}