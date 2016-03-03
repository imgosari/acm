#include <stdio.h>
int arr[10001],dp[10001];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	dp[1]=arr[1];
	dp[2]=arr[1]+arr[2];
	for(int i=3;i<=n;i++)
	{
		dp[i]=dp[i-1];

		if(dp[i] < dp[i-2]+arr[i])
			dp[i]=dp[i-2]+arr[i];
		if(dp[i] < arr[i]+arr[i-1]+dp[i-3])
			dp[i]=arr[i]+arr[i-1]+dp[i-3];
	}
	printf("%d",dp[n]);
}