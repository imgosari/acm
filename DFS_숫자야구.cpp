#include <stdio.h>
#include <vector>
#include <deque>
#include <string.h>
using namespace std;
deque<int> ar;
vector< pair<int,pair<int,int> > > comp;
int arr[3];
int n;
int algo(int v)
{ 
	int same=0;
	for(int i=0;i<comp.size();i++)
	{
		int s=0,b=0;
		int va=v;
		int vb=comp[i].first;
		int compa[3],compb[3];
		for(int j=2;j>=0;j--)
		{
			compa[j]=va%10;
			compb[j]=vb%10;
			if(compa[j]==compb[j])
				s++;
			va/=10,vb/=10;
		} 
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i==j)
					continue;
				else 
				{
					if(compa[i]==compb[j])
						b++;
				}
			}
		} 
		if(s==comp[i].second.first&&b==comp[i].second.second)
			same++;
	}
	return same;
}
void dfs(int v, int s)
{
	arr[s]=v;
	if(s==2)
	{
		if(arr[0]!=arr[1]&&arr[0]!=arr[2]&&arr[1]!=arr[2])
		{  
			int cnt=0;
			for(int i=0;i<=s;i++) 
				cnt = (cnt*10)+arr[i]; 
			ar.push_back(cnt); 
		}
		return;
	}   
	for(int i=1;i<=9;i++)
		dfs(i,s+1);
}
int main()
{
	int result=0; 
	for(int i=1;i<=9;i++)
		dfs(i,0);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int v,s,b;
		scanf("%d %d %d",&v,&s,&b);
		comp.push_back(make_pair(v,make_pair(s,b)));
	}
	int len=ar.size();
	for(int i=0;i<len;i++)
	{ 
		if(algo(ar[i])==n)  
			result++;
	}
	printf("%d",result);
} 