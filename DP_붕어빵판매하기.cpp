#include <stdio.h>
#include <iostream>
using namespace std;
int p[1001],dp[10001];
int n;
int main()
{ 
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&p[i]); 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			/* 
			dp[4]의 경우 
			i개(4개)를 기점으로
			dp[4-1]+p[1] == 1개를 한번에 팔고 4개에서 1개를 한번에 팔고 남은 3개의 경우의 최대 이익을 동시에 취함
			dp[4-2]+p[2] == 2개를 한번에 팔고 4개에서 2개를 한번에 팔고 남은 2개의 경우의 최대 이익을 동시에 취함
			dp[4-3]+p[3] == 3개를 한번에 팔고 4개에서 3개를 한번에 팔고 남은 1개의 경우의 최대 이익을 동시에 취함
			dp[4-4]+p[4] == 4개를 한번에 파는 경우
			*/
			dp[i] = max(dp[i],p[j]+dp[i-j]); 
	}
	printf("%d",dp[n]);
} 