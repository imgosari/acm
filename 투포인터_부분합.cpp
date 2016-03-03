#include <stdio.h>
int arr[100001];
int n,s,up,down,sum,min=999999,is;
int main()
{
	
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sum=arr[0];
	while(down<=up&&up<n)
	{
		if(sum<s) sum+=arr[++up];
		else if(sum>=s)
		{
			is=1;
			int cnt=(up-down)+1;
			if(min>=cnt) 
				min=cnt; 
			sum-=arr[down++];
		} 
	}
	if(!is) printf("0");
	else printf("%d",min);
}