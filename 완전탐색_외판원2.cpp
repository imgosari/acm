#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int n,result=99999999;
int arr[11][11];
int main()
{
	scanf("%d",&n); 
	vector <int> node(n);
	for(int i=1;i<=n;i++) 
		for(int j=1;j<=n;j++)
			scanf("%d",&arr[i][j]); 
	for(int i=0;i<n;i++)
		node[i]=i+1;
	do
	{
		int sum=0,f;
		for(int i=0;i<n-1;i++)
		{
			if(arr[node[i]][node[i+1]]!=0)
			{
				sum+=arr[node[i]][node[i+1]];
				f=1;
			}
			else f=0;
		}
		if(f)
		{
			if(arr[node[n-1]][node[0]]!=0)
				sum+=arr[node[n-1]][node[0]]; 
			if(result>=sum)
				result=sum;
		}
	}while(next_permutation(node.begin(),node.end()));
	printf("%d",result);
}