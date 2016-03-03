#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
int v[97000],g[97000],vcnt[97000],step[97000];
vector<int> arr;
int dfs(int data, int cnt, int s)
{
	if(vcnt[data]!=0)
	{
		if(step[data]==s)
			return cnt-vcnt[data];
		else 
			return 0;
	}
	step[data]=s;
	vcnt[data]=cnt;
	return dfs(g[data], cnt+1, s);
}
int main()
{
	int f,n,p,result=0;
	scanf("%d %d",&n,&p);
	f=n;
	arr.push_back(n);
	while(true)
	{ 
		int t=(n*f)%p;
		if(v[t]) 
		{
			g[n]=t;
			arr.push_back(t);
			break; 
		}
		else
		{
			g[n]=t;
			arr.push_back(t);
			v[t]=1;
			n=t;
		}
	}   
	for(int i=0;i<arr.size();i++)
	{
		if(vcnt[arr[i]]==0)
			result+=dfs(arr[i],1,arr[i]);
	}
	printf("%d",result);
} 