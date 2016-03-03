#include <stdio.h>  
int dp[10000000]; 
int main()
{
	int n;
	scanf("%d",&n);
	dp[1]=0;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+1; // 이전의 dp값에서 +1의 연산을 한 횟수를 기본으로 가지고 있음.
		if(i%2==0 && dp[i] > dp[i/2]+1) // 만약 2로 나눠진다면 바로 이전에서 온 값(+1)이랑 n/2해서 +1(연산의 횟수)한 값이랑 비교해서
			dp[i]=dp[i/2]+1; // 작은 값을 넣음.
		if(i%3==0 && dp[i] > dp[i/3]+1) // 마찬가지
			dp[i]=dp[i/3]+1;
	}  
	printf("%d",dp[n]); // n번까지 오는 연산 횟수를 구함.
}