#include <stdio.h>
#include <string.h> 
#include <vector>
using namespace std;
vector<int> arr[20001];
int color[20001];
int n,e;
void dfs(int cur_data, int cur_c)
{
	color[cur_data]=cur_c; 
	for(int i=0;i<arr[cur_data].size();i++)
	{ 
		int n = arr[cur_data][i];
		if(!color[n]) 
			dfs(n,3-cur_c); 
	} 
}
int main()
{ 
	int tc;
	scanf("%d",&tc);
	for(int t=0;t<tc;t++)
	{
		scanf("%d %d",&n,&e);
		for(int i=0;i<e;i++)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			arr[a].push_back(b);
			arr[b].push_back(a);
		} 
		for(int i=1;i<=n;i++)  // ��� ��忡 ���Ͽ� dfs�� �ǽ��ؾ� �׷����� ��� ����κ��� �̺б׷����� �Ǻ��� �� �ִ�.
		{
			if(!color[i])
				dfs(i,1);
		}  
		int same=0; 
		for(int i=1;i<=n;i++)
		{ 
			for(int j=0;j<arr[i].size();j++)
			{
				int t = arr[i][j];
				if(color[i]==color[t])
				{
					same=1;
					break;
				}
			}
			if(same)
				break;
		}
		if(same)
			printf("NO\n");
		else
			printf("YES\n");  
		memset(color,0,sizeof(color));
		memset(arr,0,sizeof(arr)); 
	} 
}    