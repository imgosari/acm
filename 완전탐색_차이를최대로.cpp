#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int n; 
int main()
{
	int result=0;
	scanf("%d",&n);
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sort(arr.begin(),arr.end());
	getchar();
	do
	{
		int t=0;
		for(int i=0;i<n-1;i++)
			t+=abs(arr[i]-arr[i+1]);
		if(t>=result) result=t;
	}while(next_permutation(arr.begin(), arr.end())); // next_permutation은 순열을 섞어준다.
	printf("%d",result);
}