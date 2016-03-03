#include <stdio.h>
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int arr[501][501],dp[501][501];
int m,n;  
int dfs(int y, int x)
{
	if(dp[y][x]!=0)
		return dp[y][x];
	if(y==m-1&&x==n-1) // ������ ���������� ��� 1�� ��ȯ
		return 1;
	int sum=0;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i]; 
		if(nx>=0&&nx<n&&ny>=0&&ny<m&&arr[ny][nx]<arr[y][x])
			sum+=dfs(ny,nx);
	} 
	return dp[y][x]=sum; // �� ��ε��� ������(�ڷ� ���ƿ��鼭)�ϸ鼭 4�������� ���� ��θ� ��ȯ
}
int main()
{
	scanf("%d %d",&m,&n); 
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]); 
	printf("%d",dfs(0,0));  
} 