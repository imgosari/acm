#include <stdio.h>
#include <string.h>
int n,m,k,slen,result;
int dp[101][101][81],arr[101][101];
char s[81];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int dfs(int h, int w, int step)
{    
	if(step==slen) // ������ ������ ���ڿ��̶�� 1�� ��ȯ�Ͽ� ��� 1���� �ִٰ� �˷���.
		return 1; 
	if(dp[h][w][step]!=0) // ������ ���, �Դ� ���̶�� ������ �ִ� �� ��ȯ.
		return dp[h][w][step]; 
	int sum=0;
	for(int z=1;z<=k;z++)
	{
		for(int i=0;i<4;i++)
		{
			int nx=w+(dx[i]*z);
			int ny=h+(dy[i]*z);
			if(ny<0||ny>=n||nx<0||nx>=m||arr[ny][nx]!=s[step])  continue;   
			sum+=dfs(ny,nx,step+1); 
		}
	}  
	dp[h][w][step]=sum; // �ش� �࿭�� ���ܿ����� �� ���� ��ΰ� �ִ��� ���
	return sum; // 4*k�� ��ο��� Search���ڿ����� ������ ������ �ֵ��� ���� ��ȯ��. 
} 
int main()
{ 
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;i++)
	{ 
		scanf("%s",&s);
		for(int j=0;j<m;j++)
			arr[i][j]=s[j];
	}
	scanf("%s",&s); 
	slen=strlen(s);  
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==s[0])
				result+=dfs(i,j,1); 
		}
	} 
	printf("%d",result);
}   