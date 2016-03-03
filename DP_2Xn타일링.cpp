#include <stdio.h>
// https://www.acmicpc.net/problem/11726 2*n타일링
// https://www.acmicpc.net/problem/11727 2*n타일링2
int dp[1001];
int n;
int main()
{
	scanf("%d",&n);
	dp[1]=1; 
	// dp[2]=2; // 2*n타일링
	dp[2]=3; // 2*n 타일링2
	for(int i=3;i<=n;i++)
	    // dp[i]=(dp[i-1]+dp[i-2]))%10007; // 2*n타일링
		dp[i]=(dp[i-1]+(dp[i-2]*2))%10007; // 2*n타일링2
	printf("%d",dp[n]);
}