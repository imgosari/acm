#include <stdio.h>
#include <iostream>
int arr[301],dp[301];
int n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	dp[1]=arr[1];
	dp[2]=arr[1]+arr[2];
	for(int i=3;i<=n;i++)
		// dp[i-2]+arr[i]는 현재 칸이 1번 연속 밟은 case이고
		// dp[i-3]+arr[i]+arr[i-1]은 현재 칸을 2번 연속 밟은 case라고 판단하여 max값을 구하여 dp값을 계산한다.
		dp[i]=std::max(dp[i-2]+arr[i], dp[i-3]+arr[i]+arr[i-1]);
	printf("%d",dp[n]);
}