#include <stdio.h>
#include <queue>
#include <string.h>
using namespace std;
int main()
{
	int n,data;
	char cmd[50];
	char t[50];
	scanf("%d",&n);
	getchar();
	queue<int> q;
	while(n--)
	{
		gets(t);
		sscanf(t,"%s %d",&cmd,&data);
		if(strcmp(cmd,"push")==0)
			q.push(data);
		else if(strcmp(cmd,"pop")==0)
		{
			if(!q.empty())
			{
				printf("%d\n",q.front());
				q.pop();
			}
			else
				printf("-1\n");
		}
		else if(strcmp(cmd,"size")==0)
			printf("%d\n",q.size());
		else if(strcmp(cmd,"empty")==0)
			printf("%d\n",q.empty());
		else if(strcmp(cmd,"front")==0)
		{
			if(!q.empty())
				printf("%d\n",q.front());
			else
				printf("-1\n");
		}
		else if(strcmp(cmd,"back")==0)
		{
			if(!q.empty())
				printf("%d\n",q.back());
			else
				printf("-1\n");
		}
	}
}