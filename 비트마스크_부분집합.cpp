#include <stdio.h>
int arr[21];
int main()
{
	int n,s,ans=0;
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	for(int i=1;i<(1<<n);i++) //  부분집합의 모든 경우 구하는 것.
	{
		int sum=0;
		for(int j=0;j<n;j++) 
			if(i&(1<<j)) sum+=arr[j]; // 부분집합 i에 j가 포함되어 있으면, 즉 sum은 부분집합의 합의 모든 경우를 구하는 것.
		if(sum==s) ans++;
	}
	printf("%d",ans);
}