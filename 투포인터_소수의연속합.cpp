#include <stdio.h>
#define MAX 4000001
int temp[MAX],prime[MAX];
int down,up,ans,sum;
int m(int s)
{
	int idx=0,v=0;
	for(int i=0;i<MAX;i++) temp[i]=1;
	for(int i=2;i*i<=MAX;i++)
		for(int j=i*2;j<=MAX;j+=i)  temp[j]=0;
	for(int i=2;i<=MAX;i++)
	{
		if(temp[i])
		{
			prime[idx++]=i;
			if(i>=s)  return idx;
		}
	}
}
int main()
{
	int inp,n;
	scanf("%d",&inp);
	n=m(inp); 
	sum=prime[0];
	while(down<=up&&up<n)
	{
		if(sum<inp) sum+=prime[++up];
		else if(sum>inp) sum-=prime[down++];
		else if(sum==inp) ans++,sum+=prime[++up];
	}
	printf("%d",ans);
}