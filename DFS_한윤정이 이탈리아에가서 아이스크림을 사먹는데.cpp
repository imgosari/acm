#include <stdio.h>
#include <algorithm>
using namespace std; 
int p[222][222];
int n,c,ans;
int main()
{
	scanf("%d %d",&n,&c);  
	for(int i=0;i<c;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		p[a][b]=1,p[b][a]=1;
	} 
	for(int h=1;h<=n;h++)
	{
		for(int i=h+1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
			{ 
				if(p[h][i])  break;
				if(!p[h][i]&&!p[h][j]&&!p[i][j])  ans++; 
			}
		}
	}
	printf("%d",ans);
}