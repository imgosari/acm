#include <stdio.h>
#include <string.h>
int arr[1001];
int visit[1001];
int n;
int dfs(int s)
{
	if(!visit[s])
	{
		visit[s]=1;
		dfs(arr[s]);
	}
	else
		return s;
}
int main()
{
	int tc;
	scanf("%d",&tc);
	for(int t=0;t<tc;t++)
	{
		int cnt=0,temp;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&temp);
			arr[i]=temp;
		}
		for(int i=1;i<=n;i++)
		{ 
			if(!visit[i])
				if(i==dfs(i))
					cnt++;
		}
		printf("%d\n",cnt);
		memset(arr,0,sizeof(arr));
		memset(visit,0,sizeof(visit));
	}
} 