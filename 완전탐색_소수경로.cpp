#include <stdio.h>
#include <queue>
using namespace std;
int prime[10000];
void p()
{
	for(int i=0;i<10000;i++)
		prime[i]=1;
	for(int i=2;i<10000;i++)
	{
		for(int j=i*i;j<10000;j+=i)
			prime[j]=0;
	}

}
int comp(int a, int b)
{
	int cnt=0;
	while(a>0&&b>0)
	{ 
		int ta=a%10;
		int tb=b%10;
		if(ta!=tb) cnt++;
		if(cnt==2) return 0;
		a/=10;
		b/=10;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int t=0;t<n;t++)
	{
		int s,e,cnt=0,ans=0;
		scanf("%d %d",&s,&e);
		int v[10000]={0,};
		queue< pair<int,int> > q; 
		p();
		q.push(make_pair(s,0));
		v[s]=1;
		while(!q.empty())
		{ 
			int deq=q.front().first;
			int deqc=q.front().second;
			if(deq==e) 
			{
				printf("%d\n",deqc);
				ans=1;
				break;
			} 
			q.pop(); 
			for(int i=deq;i<=9999;i++)
			{
				if(!v[i]&&prime[i]&&comp(deq,i))
				{ 
					q.push(make_pair(i,deqc+1));
					v[i]=1; 
				}
			} 
			for(int i=deq;i>=1000;i--)
			{
				if(!v[i]&&prime[i]&&comp(deq,i))
				{ 
					q.push(make_pair(i,deqc+1));
					v[i]=1; 
				}
			} 
		}
		if(!ans)
			printf("Impossible\n"); 
	} 
} 