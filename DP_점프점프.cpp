#include <stdio.h>
#include <algorithm>
using namespace std;
int dp[1010][3];
int n; 
int main()
{ 
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&dp[i][0]);
	dp[0][1]=0;
	dp[0][2]=-1;
	for(int i=0;i<n;i++)
	{
		int delta=dp[i][0];  
		int dcnt=0;
		if(dp[i][1]) dcnt=dp[i][1]; 
		int lim=i+delta;
		if(lim>=n) lim=n;
		for(int j=i+1;j<=lim;j++)
		{
			if(dp[j][1]==0)
			{
				dp[j][1]=dcnt+1;
				dp[j][2]=i;
			}
			else
			{ 
				dp[j][1]=min(dp[j][1], dcnt+1); 
				dp[j][2]=i;
			}
		} 
	}  
	int now=dp[n-1][2];
	while(true)
	{ 
		if(dp[now][1]==0&&dp[now][2]==0) 
		{
			printf("-1");
			break;
		}
		else if(dp[now][2]==-1)
		{
			printf("%d",dp[n-1][1]);
			break;
		} 
		now=dp[now][2];
	}
}