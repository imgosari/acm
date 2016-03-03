#include <stdio.h>
#include <vector>
using namespace std;
vector<int> arr;
int inresult=1,deresult=1;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		arr.push_back(t);
	} 
	int rcnt=1,lcnt=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<=arr[i+1]) 
		{ 
			rcnt++; 
			if(inresult<=rcnt) inresult=rcnt;
		}
		else rcnt=1;  
	}   
	for(int i=n-1;i>=1;i--)
	{
		if(arr[i]<=arr[i-1])
		{
			lcnt++;
			if(deresult<=lcnt) deresult=lcnt;
		}
		else lcnt=1;
	}
	if(deresult<=inresult) printf("%d",inresult);
	else printf("%d",deresult); 
}  