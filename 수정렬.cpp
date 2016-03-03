#include <stdio.h>  
int n,t;
int arr[10001];
int main()
{
	scanf("%d",&n); 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t);
		++arr[t];
	} 
	for(int i=0;i<=10000;i++)
	{
		if(arr[i]>0)
		{
			for(int j=1;j<=arr[i];j++)
				printf("%d\n",i);
		}
	}
} 