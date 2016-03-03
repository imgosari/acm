#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,len,t,f=0;
	scanf("%d",&n);
	len=n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sort(arr.begin(), arr.end());
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t);
		int left=0,right=len,mid;
		while(left<=right)
		{
			mid=(left+right)/2;
			if(t==arr[mid]) 
			{ 
				printf("1 "); f=1; break; 
			}
			if(t>arr[mid]) 
				left=mid+1;
			if(t<arr[mid]) 
				right=mid-1;
		}
		if(!f) printf("0 ");
		f=0;
	}
}