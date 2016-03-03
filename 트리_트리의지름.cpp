#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
int m,mnode,n,node;
vector< pair<int,int> > tree[100001];
int v[100001];
void dfs(int s, int sum)
{ 
	v[s]=1;
	if(sum>=m)
	{
		m=sum;
		mnode=s;
	}
	for(int j=0;j<tree[s].size();j++)
	{
		if(!v[tree[s][j].first])
			dfs(tree[s][j].first,sum+tree[s][j].second);
	}
}
int main()
{
	int fnode;
	scanf("%d",&n); 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&node);
		while(true)
		{
			int bnode,dis;
			scanf("%d",&bnode);
			if(bnode==-1) break;
			scanf("%d",&dis); 
			tree[node].push_back(make_pair(bnode,dis));
		} 
	}
	dfs(1,0);  // 1번을 시작으로 dfs를 하면 루트에서 가장 먼 곳의 노드가 나온다.
	m=0;
	memset(v,0,sizeof(v));
	dfs(mnode,0); // 루트에서 가장 먼 거리를 다시 루트로 잡고, dfs를 실시하면 그곳에서 가장 먼 거리의 노드가 나온다.
	printf("%d",m); // 그 노드의 거리가 바로 트리의 지름이다.
} 