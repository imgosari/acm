#include <stdio.h>
int prime[1000001];
int main()
{
	int a,b,cnt=0;
	for(int i=0;i<=1000001;i++)
		prime[i]=1;
	for(int i=2;i<=1000001;i++)
	{
		for(int j=i*2;j<1000001;j+=i)
			prime[j]=0;
	}
	prime[1]=0;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(prime[i]==1)
			printf("%d\n",i);
	}
}