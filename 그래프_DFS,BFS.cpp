#include <stdio.h>
#include <queue>
int g[1001][1001];
int dcheck[1001];
int bcheck[1001]; 
int n,m,s;
using namespace std;
queue<int> q;
void dfs(int _s)
{
	dcheck[_s]=1;
	printf("%d ",_s);
	for(int i=1;i<=n;i++)
	{
		if(!dcheck[i]&&g[_s][i])
			dfs(i);
	}
}
void bfs(int _s)
{ 
	printf("%d ", _s);
	q.push(_s);
	bcheck[_s]=1;
	while(!q.empty())
	{
		int deq=q.front();  
		q.pop();
		for(int i=1;i<=n;i++)
		{
			if(g[deq][i]&&!bcheck[i])
			{
				printf("%d ",i);
				q.push(i);
				bcheck[i]=1;
			}
		}
	}
}
int main()
{  
	scanf("%d %d %d",&n,&m,&s);
	for(int i=0;i<m;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		g[a][b]=1,g[b][a]=1;
	}  
	dfs(s);   
	printf("\n");
	bfs(s);
}  