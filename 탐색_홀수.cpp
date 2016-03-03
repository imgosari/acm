#include <stdio.h>
#include <vector>
using namespace std;
int cnt,ans=999,sum;
int main()
{
	vector<int> arr(7);
	for(int i=0;i<7;i++)
	{
		scanf("%d",&arr[i]);
		if((arr[i]%2)==1)
		{
			sum+=arr[i];
			if(ans>=arr[i]) ans=arr[i];
			cnt++;
		}
	}
	if(!cnt) printf("-1");
	else printf("%d\n%d",sum,ans); 
}