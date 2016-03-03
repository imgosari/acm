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
	dfs(1,0);  // 1���� �������� dfs�� �ϸ� ��Ʈ���� ���� �� ���� ��尡 ���´�.
	m=0;
	memset(v,0,sizeof(v));
	dfs(mnode,0); // ��Ʈ���� ���� �� �Ÿ��� �ٽ� ��Ʈ�� ���, dfs�� �ǽ��ϸ� �װ����� ���� �� �Ÿ��� ��尡 ���´�.
	printf("%d",m); // �� ����� �Ÿ��� �ٷ� Ʈ���� �����̴�.
} 