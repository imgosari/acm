#include <stdio.h>
#include <string.h>
int s[100002];
int top=-1;
int main()
{
	int n,data;
	char cmd[20],input[20];
	scanf("%d",&n); 
	getchar();
	for(int i=0;i<n;i++)
	{
		gets(input);
		sscanf(input,"%s %d",&cmd,&data);
		if( strcmp(cmd,"push")==0)
			s[++top] = data;
		else if( strcmp(cmd,"top")==0)
		{
			if( top == -1)
				printf("-1\n");
			else
				printf("%d\n",s[top]);
		}
		else if( strcmp(cmd, "size")==0)
			printf("%d\n",top+1);
		else if( strcmp(cmd, "pop")==0)
		{
			if( top== -1)
				printf("-1\n");
			else
			{
				printf("%d\n",s[top]);
				--top;
				if(top<0)
					top=-1;
			}
		}
		else if( strcmp(cmd, "empty")==0)
		{
			if( top==-1)
				printf("1\n");
			else
				printf("0\n");
		}
		data = 0;
	}
}