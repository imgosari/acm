#include <stdio.h>
#include <string.h>

char temp[100];

int atoi(char* p)
{
	int result = 0;
	int bae = 1;
	int len = strlen(p);
	for(int i=len-1;i>=0;i--)
	{
		result += (bae * (p[i]-'0'));
		bae *= 10;
	}
	return result;
}

char* itoa(int v)
{
	char result[100];
	int idx = -1;
	while(true)
	{
		if(v==0)
			break;
		
		result[++idx]=(v%10)+'0';
		v/=10;
	}
	result[++idx]='\0'; 
	strrev(result);
	return result;
} 
char p[100];
int main()
{
	//printf("%d\n", atoi("1234"));  
	strcpy(p, itoa(1234));
	printf("%s", p);
	return 0;
}