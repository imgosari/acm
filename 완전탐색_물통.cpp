#include <stdio.h>
#include <queue>
using namespace std;
int visit[201][201];
int result[402];
int main()
{ 
	int capa,capb,capc;
	scanf("%d %d %d",&capa,&capb,&capc);
	queue< pair<pair<int,int>,int> > q; // a,b,c;
	q.push(make_pair(make_pair(0,0),capc));
	visit[0][0]=1;
	while(!q.empty())
	{
		int a=q.front().first.first;
		int b=q.front().first.second;
		int c=q.front().second;
		int sum;
		q.pop();
		if(a==0) result[c]=1; 
		int na,nb,nc;
		if(a!=0)
		{
			if(b!=capb)
			{
				nb=a+b; // a->b
				if(nb>capb)
				{
					nb=capb;
					na=sum-(c+nb);
				}
				else
					na=0;

				if(!visit[na][nb]) 
				{
					q.push(make_pair(make_pair(na,nb),c));   
					visit[na][nb]=1;
				}
			} 
			if(c!=capc)
			{
				nc=a+c; // a->c
				if(nc>capc)
				{
					nc=capc;
					na=sum-(b+nc);
				}
				else
					na=0;

				if(!visit[na][b])
				{
					q.push(make_pair(make_pair(na,b),nc));
					visit[na][b]=1; 
				}
			}
		}
		if(b!=0)
		{
			if(a!=capa)
			{
				na=a+b; // b->a
				if(na>capa)
				{
					na=capa;
					nb=sum-(c+na);
				}
				else
					nb=0;

				if(!visit[na][nb])
				{
					q.push(make_pair(make_pair(na,nb),c));
					visit[na][nb]=1; 
				}
			}
			if(c!=capc)
			{
				nc=b+c; // b->c
				if(nc>capc)
				{
					nc=capc;
					nb=sum-(a+nc);
				}
				else
					nb=0;

				if(!visit[a][nb])
				{
					q.push(make_pair(make_pair(a,nb),nc));
					visit[a][nb]=1; 
				}
			}
		}
		if(c!=0)
		{
			if(a!=capa)
			{
				na=c+a; // c->a
				if(na>capa)
				{
					na=capa;
					nc=sum-(b+na);
				} 
				else
					nc=0;

				if(!visit[na][b])
				{
					q.push(make_pair(make_pair(na,b),nc));
					visit[na][b]=1; 
				}
			}
			if(b!=capb)
			{
				nb=c+b; // c->b
				if(nb>capb) 
				{
					nb=capb;
					nc=sum-(a+nb);
				} 
				else
					nc=0;

				if(!visit[a][nb])
				{
					q.push(make_pair(make_pair(a,nb),nc));
					visit[a][nb]=1; 
				}
			}
		} 
	}
	for(int i=0;i<402;i++)
	{
		if(result[i]!=0)
			printf("%d ",i);
	}
}
