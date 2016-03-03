#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
vector<int> t[100001];
queue<int> q;
int v[100001],result[100001];
void bfs(int s)
{
	v[s]=1;
	q.push(s); 
	while(!q.empty())
	{
		int deq=q.front();
		q.pop(); 
		for(int j=0;j<t[deq].size();j++)
		{
			if(!v[t[deq][j]])
			{ 
				result[t[deq][j]]=deq;
				v[t[deq][j]]=1;
				q.push(t[deq][j]);
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		t[a].push_back(b);
		t[b].push_back(a);

	} 
	bfs(1); 
	for(int i=2;i<=n;i++)
		printf("%d\n",result[i]);
} 