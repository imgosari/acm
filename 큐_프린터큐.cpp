#include <stdio.h>
#include <string.h>  
int q[1000000][2];
int arr[1000];
int t,n,sidx,front,end;
int search_max()
{
	int max=0;
	for(int i=front;i<=end;i++)
	{
		if(max<=q[i][0])
			max=q[i][0];
	}
	return max;
}
int main()
{ 
	scanf("%d",&t);
	for(int z=0;z<t;z++)
	{ 
		scanf("%d %d",&n,&sidx);
		int max=0; 
		for(int y=0;y<n;y++)
		{
			scanf("%d",&arr[y]);
			if(arr[y]>=max)
				max=arr[y]; 
			q[end][0]=arr[y];
			q[end][1]=y; 
			end++;
		}
		int cnt=0;
		while(true)
		{
			if(q[front][0]==max&&q[front][1]==sidx)  
			{
				cnt++;
				break; 
			}
			else if(q[front][0]==max) 
			{
				q[front][0]='\0';
				q[front][1]='\0';
				front++; 
				cnt++;
			}
			else
			{
				int d=q[front][0];
				int i=q[front][1]; 
				q[front][0]='\0';
				q[front][1]='\0';
				front++; 
				end++;
				q[end][0]=d;
				q[end][1]=i; 
			}
			max=search_max();
		} 
		printf("%d\n",cnt);
		memset(q,0,sizeof(q));
		memset(arr,0,sizeof(arr));
		front=0,end=0;
	} 
}    