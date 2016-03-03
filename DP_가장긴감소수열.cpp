#include <stdio.h>
int dp[1010],arr[1010];
int n,result;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(arr[j]>arr[i]&&dp[j]>=dp[i]) // 처음부터 도는 루트의 값이 현재 값보다 큰 경우 
			{
				dp[i]=dp[j]+1; // dp의 값을 갱신시켜줘야한다.
				if(dp[i]>=result)
					result=dp[i];
			}
		}
	}
	if(dp[n-1]>=result)
		result=dp[n-1];
	printf("%d",result);
}
/*
10
1 5 2 1 4 3 4 5 2 1
*/