#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int sum,n,result;
int f(int s) 
{
	int r=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=s)
			r+=arr[i];
		else
			r+=s;
	}
	return r;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		arr.push_back(t);
	}
	sort(arr.begin(), arr.end()); 
	getchar();
	scanf("%d",&sum);
	int left=0,right=arr[n-1],mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		int t=f(mid);	
		if(t>sum)
			right=mid-1;
		else if(t<=sum)
		{
			left=mid+1;
			if(result<=mid)
				result=mid;
		}
	} 
	printf("%d",result);
} 