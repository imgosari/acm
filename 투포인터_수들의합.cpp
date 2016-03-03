#include <stdio.h>
int arr[10001];
int main()
{
	int n,s,up=0,down=0,ans=0;
	scanf("%d %d",&n,&s); 
	for(int t=0;t<n;t++) scanf("%d",&arr[t]);
	int sum=arr[0];
	while(down<=up&&up<n)
	{
		if(sum<s) sum+=arr[++up];
		else if(sum>s) sum-=arr[down++];
		else if(sum==s) ans++,sum+=arr[++up];
	}
	printf("%d",ans);
}