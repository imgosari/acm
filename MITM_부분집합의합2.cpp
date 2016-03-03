#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int step[100],arr[41];
int n,s,didx,d2idx;
vector<int> dev,dev2;
void dfs(int what, int idx, int s,int l, int len)
{  
	step[s]=arr[idx];  
	if(s==l-1)
	{
		int sum=0;
		for(int i=0;i<l;i++) sum+=step[i];
		if(what) dev.push_back(sum);
		else dev2.push_back(sum);
		return;
	}
	for(int i=idx+1;i<len;i++) dfs(what,i,s+1,l,len);
}
int main()
{  
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]); 
	int alen,a2len;
	alen=n/2;
	a2len=n-alen; 
	for(int l=1;l<=alen;l++)
		for(int i=0;i<alen;i++)  dfs(1,i,0,l,alen);
	for(int l=1;l<=a2len;l++)
		for(int i=alen;i<n;i++)  dfs(0,i,0,l,n);
	dev.push_back(0),dev2.push_back(0); // °øÁýÇÕ
	sort(dev.begin(), dev.end());
	sort(dev2.begin(), dev2.end());
	reverse(dev2.begin(), dev2.end());
	int up=0,down=0;
	long long ans=0;
	int n=1<<alen;
	int m=1<<a2len;
	while(up<n&&down<m)
	{
		if(dev[up]+dev2[down]>s) down++;
		else if(dev[up]+dev2[down]<s) up++;
		else if(dev[up]+dev2[down]==s)
		{ 
			down++;
			up++;
			long long c1=1,c2=1;
			while(up<n&&dev[up]==dev[up-1])
			{
				c1++;
				up++;
			}
			while(down<m&&dev2[down]==dev2[down-1])
			{
				c2++;
				down++;
			}
			ans+=(c1*c2);
		}
	}
	if(s==0) ans-=1;
	printf("%lld",ans);
}