#include <stdio.h>
#include <string.h>
int main()
{ 
	int n;
	scanf("%d",&n);
	for(int t=0;t<n;t++)
	{
		double num;
		char c[6];
		int len;
		scanf("%lf",&num);
		getchar();
		len=strlen(gets(c));
		for(int i=0;i<len;i++)
		{
			if(c[i]!=32)
			{
				if(c[i]=='@')
					num*=3;
				else if(c[i]=='%')
					num+=5;
				else if(c[i]=='#')
					num-=7;
			}
		}
		printf("%.2lf\n",num);
	}
}