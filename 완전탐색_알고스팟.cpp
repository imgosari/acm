#include <stdio.h>
#include <string.h> 
#include <deque>
using namespace std; 
int arr[200][200],v[200][200],arr2[200][200];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int h,w,ans;
deque< pair<pair<int,int>,int> > q;
void bfs(int y, int x)
{  
	q.push_back(make_pair(make_pair(y,x),0)); 
	v[y][x]=1;
	while(!q.empty())
	{
		int deqh=q.front().first.first;
		int deqw=q.front().first.second;
		int deqc=q.front().second;
		q.pop_front();
		for(int i=0;i<4;i++)
		{
			int nx=deqw+dx[i];
			int ny=deqh+dy[i];
			if(nx>=0&&nx<w&&ny>=0&&ny<h&&!v[ny][nx])
			{ 
				if(!arr[ny][nx]) 
					// 0�� ��� �湮�ؾ��ϴ�, ������ �־��ش�. �׷��� ���� deq���� 0�� ������ ����.
				{
					q.push_front(make_pair(make_pair(ny,nx),deqc));
					arr2[ny][nx]=deqc; // �迭�� �ϳ� �� ��� ������ ������ ������ �ʴ´�.
					v[ny][nx]=1;
				}
				else // ���� ���� �� ���� ����� �ڷ� �־��ش�. �׷��� �� ���� ���� ���� ���̶� ����� bfs�ϱ� ����.
				{ 
					q.push_back(make_pair(make_pair(ny,nx),deqc+1));
					arr2[ny][nx]=deqc+1;
					v[ny][nx]=1;
				}
			}
		}
	}   
}
int main()
{
	scanf("%d %d",&w,&h);
	getchar();
	for(int i=0;i<h;i++)
	{
		char t[200];
		strlen(gets(t));
		for(int j=0;j<w;j++)
			arr[i][j]=t[j]-'0';
	}
	bfs(0,0);
	// bfs�� �� ������ ����ؾ� ���� �ڸ��ϴ�.
	printf("%d",arr2[h-1][w-1]);
}  