#include <stdio.h>
#include <string>
char s[100001];
int jin,len,tcnt,sum;
int pow(int sum, int what, int cnt)
{
	if(cnt==0)
		return sum;
	else
		pow(sum*what, what, --cnt);
}
int main()
{ 
	scanf("%s %d",&s,&jin);
	len=strlen(s);
	for(int i=len-1;i>=0;i--)
	{
		if(s[i]>=65&&s[i]<=90)
			sum+=(s[i]-55)*pow(1,jin,tcnt++); 
		else
			sum+=(s[i]-'0')*pow(1,jin,tcnt++); 
	}
	printf("%d",sum);
}

