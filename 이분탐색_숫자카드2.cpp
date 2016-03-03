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
		int cnt=1;
		scanf("%d",&t); 
		int left=0,right=len-1,mid;
		while(left<=right)
		{
			mid=(left+right)/2;
			if(t==arr[mid]) 
			{ 
				f=1;
				for(int i=mid;i>0;i--)
				{
					if(arr[i]==arr[i-1]) ++cnt;
					else break;
				}
				for(int i=mid;i<right;i++)
				{
					if(arr[i]==arr[i+1]) ++cnt;
					else break;
				}
				break;
			}
			if(t>arr[mid]) 
				left=mid+1;
			if(t<arr[mid]) 
				right=mid-1;
		}
		if(!f) printf("0 ");
		else printf("%d ",cnt);
		f=0;
		cnt=1;
	}
}