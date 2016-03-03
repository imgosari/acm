#include <stdio.h>
#include <string.h>
#define mod 1000000
char arr[5010];
int dp[5010];
int main()
{
	int len;
	scanf("%s",arr+1);
	len=strlen(arr+1);
	dp[0]=1;
	for(int i=1;i<=len;i++)
	{
		int t=arr[i]-'0';
		if(t>=1&&t<=9) 
		{
			dp[i]+=dp[i-1];
			dp[i]%=mod;
		}
		if(i==1) continue;
		if(arr[i-1]=='0') continue;
		t=((arr[i-1]-'0')*10)+(arr[i]-'0');
		if(t>=10&&t<=26) 
		{
			dp[i]+=dp[i-2];
			dp[i]%=mod;
		}
	}
	printf("%d",dp[len]);
}