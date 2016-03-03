#include <stdio.h>

int main()
{
	int cnt=1,e=1,s=1,m=1,re,rs,rm;
	scanf("%d %d %d",&re,&rs,&rm);
	while(true)
	{
		if(e==re&&s==rs&&m==rm) { printf("%d",cnt); break; }
		e++;
		if(e>15) e=1;
		s++;
		if(s>28) s=1;
		m++;
		if(m>19) m=1;
		cnt++;
	} 
}