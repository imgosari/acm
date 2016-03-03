#include <stdio.h>
#include <queue>
using namespace std;
int v[1000001];
queue< pair<int,int> > q;
int main()
{
	int f,g,s,u,d;
	scanf("%d %d %d %d %d",&f,&s,&g,&u,&d);
	v[s]=1;	
	q.push(make_pair(s,0));
	while(!q.empty())
	{
		int deq=q.front().first;
		int dcnt=q.front().second;
		if(deq==g)
		{
			printf("%d",dcnt);
			return 0;
		}
		q.pop();
		int up=deq+u;
		if(up<=f&&!v[up])
		{
			q.push(make_pair(up,dcnt+1));
			v[up]=1;
		}
		int down=deq-d;
		if(down>=1&&!v[down])
		{
			q.push(make_pair(down,dcnt+1));
			v[down]=1;
		}
	}
	printf("use the stairs");
}