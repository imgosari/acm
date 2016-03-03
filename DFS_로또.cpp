#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int step[20],arr[20];
int n;
void dfs(int idx, int s)
{ 
	step[s]=arr[idx];
	if(s==5)
	{
		for(int i=1;i<6;i++)
			if(step[i]<step[i-1])  return;
		for(int i=0;i<6;i++) printf("%d ",step[i]);
		printf("\n");
	}
	for(int i=idx+1;i<n;i++)
		dfs(i,s+1);
}
int main()
{ 
	scanf("%d",&n);
	while(n!=0)
	{
		for(int i=0;i<n;i++) scanf("%d",&arr[i]);
		for(int i=0;i<n;i++) dfs(i,0); 
		printf("\n");
		scanf("%d",&n);
	}
}