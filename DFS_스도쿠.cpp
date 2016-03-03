#include <stdio.h>
#include <vector>
using namespace std; 
int map[10][10]; 
vector< pair<int,int> > blank;
int len,clen; 
int check(int s, int h, int w)
{  
	int ti=(h/3)*3;
	int tj=(w/3)*3;
	for(int i=ti;i<ti+3;i++) // 9 part
		for(int j=tj;j<tj+3;j++)
			if(map[i][j]==s) return 0;
	for(int i=0;i<9;i++) // 가로
		if(map[h][i]==s) return 0;
	for(int j=0;j<9;j++) // 세로
		if(map[j][w]==s) return 0;
	return 1;
}  
int dfs(int cur)
{
	int x=cur%9;
	int y=cur/9;
	if(cur==81)
	{
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
				printf("%d ",map[i][j]);
			printf("\n");
		}
		return 0;
	} 
	else if(map[y][x]!=0)
	{
		if(!dfs(cur+1)) return 0;
	}
	else
	{
		for(int k=1;k<=9;k++)
		{
			if(check(k,y,x))
			{
				map[y][x]=k; 
				if(!dfs(cur+1)) return 0;
				map[y][x]=0; 
			}
		}
	}
} 
int main()
{   
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
			scanf("%d",&map[i][j]);
	}  
	dfs(0); 
} 