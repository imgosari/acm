// https://www.acmicpc.net/problem/11055
#include <stdio.h>
int dp[1010];
int arr[1010];
int n,m;
int main()
{ 
	scanf("%d",&n); 
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		dp[i]=arr[i]; 
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j]&&dp[i]<dp[j]+arr[i])   // arr[i]�� ���� ���� ������ j�� 0���� n���� ��ȸ�ϸ� �Ǵ��ؾ� �Ѵ�.
			{
				dp[i]=dp[j]+arr[i];
				if(dp[i]>m)
					m=dp[i];
			}
		}
	}
	if(dp[n-1]>m)
		m=dp[n-1];
	printf("%d",m);
}