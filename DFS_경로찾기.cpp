#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
int arr[101][101],result[101][101];
int visit[101];
int n; 
void dfs(int data, int s)
{
	if(visit[data]) return; 
	visit[data]=1;
	result[s][data]=1; 
	for(int i=1;i<=n;i++)
		if(arr[data][i]) dfs(i,s);
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&arr[i][j]);
	for(int i=1;i<=n;i++)
	{
		memset(visit,0,sizeof(visit));
		for(int j=1;j<=n;j++)
			if(arr[i][j]) dfs(j,i);
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) printf("%d ",result[i][j]);
		printf("\n");
	}
}