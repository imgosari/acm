#include <stdio.h>
int prime[1000001];
int n,idx,max;
int main()
{

	for(int i=0;i<=1000001;i++)
		prime[i]=1;
	for(int i=2;i*i<=1000001;i++)
	{
		for(int j=2*i;j<=1000001;j+=i)
			prime[j]=0;
	}
	prime[0]=0;
	prime[1]=0; 
	while(true)
	{
		scanf("%d",&n);
		if(n==0)
			break; 
		for(int i=n;i>=3;i--)
		{
			if(prime[i]&&(i%2)==1)
			{
				int t=n-i;
				if(prime[t]&&(t%2)==1)
				{
					if(t+i==n)
					{
						printf("%d = %d + %d\n",n,t,i); 
						break;
					}
				}
			}
		} 
	}
}