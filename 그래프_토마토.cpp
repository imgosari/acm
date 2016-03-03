#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int arr[1001][1001];
int v[1001][1001];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int h,w,result,t1,t2;
queue< pair< pair<int,int>,int> > q;  
void bfs()
{ 
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(arr[i][j]==1&&!v[i][j])
			{
				q.push(make_pair(make_pair(i,j),0));
				v[i][j]=1;
				arr[i][j]=-2;
			}
		}
	} 
	int th,tw,ts;
	while(!q.empty())
	{   
		th=q.front().first.first;
		tw=q.front().first.second;
		ts=q.front().second;
		q.pop(); 
		for(int i=0;i<4;i++)
		{
			int nw=tw+dx[i];
			int ny=th+dy[i];
			if(nw>=0&&nw<w&&ny>=0&&ny<h&&!v[ny][nw]&&arr[ny][nw]!=-1)
			{
				q.push(make_pair(make_pair(ny,nw),ts+1));
				arr[ny][nw]=ts+1;
				v[ny][nw]=1; 
			}
		} 
	} 
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(arr[i][j]>result) 
				result=arr[i][j];
		}
	} 
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(arr[i][j]==0&&!v[i][j])
				result=-1;
		}
	}
	printf("%d",result);
} 
int main()
{  
	scanf("%d %d",&w,&h);  
	t2=w*h;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1)  
				t1++;
			else if(arr[i][j]==-1)
				t2--;
		}
	}
	if(t1==t2) printf("0");  
	else bfs();
}   
