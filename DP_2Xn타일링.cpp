#include <stdio.h>
// https://www.acmicpc.net/problem/11726 2*nŸ�ϸ�
// https://www.acmicpc.net/problem/11727 2*nŸ�ϸ�2
int dp[1001];
int n;
int main()
{
	scanf("%d",&n);
	dp[1]=1; 
	// dp[2]=2; // 2*nŸ�ϸ�
	dp[2]=3; // 2*n Ÿ�ϸ�2
	for(int i=3;i<=n;i++)
	    // dp[i]=(dp[i-1]+dp[i-2]))%10007; // 2*nŸ�ϸ�
		dp[i]=(dp[i-1]+(dp[i-2]*2))%10007; // 2*nŸ�ϸ�2
	printf("%d",dp[n]);
}