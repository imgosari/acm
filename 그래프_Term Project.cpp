#include <stdio.h>
#include <string.h>
int vcnt[100001];
int step[100001];
int arr[100001];
int dfs(int data, int cnt, int s)
{
	if(vcnt[data]!=0)
	{
		if(step[data]==s)
			return cnt-vcnt[data];
		else
			return 0;
	}	
	vcnt[data]=cnt;
	step[data]=s;
	return dfs(arr[data], cnt+1, s);
} 
int main()
{
	int tc;
	scanf("%d",&tc);
	for(int t=0;t<tc;t++)
	{
		int n,result=0;
		memset(arr,0,sizeof(arr));
		memset(step,0,sizeof(step));
		memset(vcnt,0,sizeof(vcnt));
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&arr[i]); 
		for(int i=1;i<=n;i++)
		{
			if(vcnt[i]==0)
				result+=dfs(i,1,i); // 팀이 된 애들을 카운팅 함.
		}
		printf("%d\n",n-result); 
	} 
}