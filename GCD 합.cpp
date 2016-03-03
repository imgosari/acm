#include <stdio.h>
int arr[101];
int sum=0;
int gcd(int a, int b) // 유클리드 호제법으로 gcd구하기
{
	if(b==0)
		return a;
	else
		gcd(b, a%b);
}
int main()
{
	int out,in,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&in);
		for(int j=0;j<in;j++)
			scanf("%d",&arr[j]);
		for(int q=0;q<in;q++)
		{
			for(int p=q+1;p<in;p++)
				sum+=gcd(arr[q],arr[p]);
		}
		printf("%d\n",sum);
		sum=0;
	}
}