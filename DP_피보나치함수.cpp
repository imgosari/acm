#include <stdio.h>
#include <string.h>
int v[3];
int algo(int n)
{
	if(n==0)
	{
		v[0]+=1;
		return 0;
	}
	else if(n==1)
	{
		v[1]+=1;
		return 1;
	}
	return algo(n-1)+algo(n-2);
}
int main()
{
	int T,n;
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		scanf("%d",&n);
		algo(n);
		printf("%d %d\n",v[0],v[1]);
		memset(v,0,sizeof(v));
	}
}