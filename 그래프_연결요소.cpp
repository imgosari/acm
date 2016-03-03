#include <stdio.h>
#include <queue>
int g[1001][1001];
int dcheck[1001]; 
int n,m,cnt;
using namespace std; 
void dfs(int _s)
{
	dcheck[_s]=1; 
	for(int i=1;i<=n;i++)
	{
		if(!dcheck[i]&&g[_s][i])
			dfs(i);
	}
} 
int main()
{   
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		g[a][b]=1,g[b][a]=1;
	}   
	for(int i=1;i<=n;i++)
	{
		if(!dcheck[i])
		{
			dfs(i);
			cnt++;
		}
	}
	printf("%d",cnt);
}  