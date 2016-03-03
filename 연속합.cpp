#include <stdio.h> 
int main()
{
	int max=1<<31,n,temp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(temp<0) temp=t; // -가 나오면 순서 끊어주기
		else temp+=t; // 양수면 계속 더하기
		if(max<temp)
			max=temp; 
	}
	printf("%d",max);
}