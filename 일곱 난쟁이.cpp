#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr; 
int t[7];
int main()
{
	for(int i=0;i<9;i++)
	{
		int t;
		scanf("%d",&t);
		arr.push_back(t);
	}
	sort(arr.begin(), arr.end());   
	do
	{
		int sum=0;
		for(int i=0;i<7;i++)
		{
			t[i]=arr[i];
			sum+=t[i];
		}
		if(sum==100)
		{
			for(int i=0;i<7;i++)
				printf("%d\n",t[i]);
			return 0;
		}
	}while(next_permutation(arr.begin(), arr.end()));
} 