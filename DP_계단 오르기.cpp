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
		// dp[i-2]+arr[i]�� ���� ĭ�� 1�� ���� ���� case�̰�
		// dp[i-3]+arr[i]+arr[i-1]�� ���� ĭ�� 2�� ���� ���� case��� �Ǵ��Ͽ� max���� ���Ͽ� dp���� ����Ѵ�.
		dp[i]=std::max(dp[i-2]+arr[i], dp[i-3]+arr[i]+arr[i-1]);
	printf("%d",dp[n]);
}