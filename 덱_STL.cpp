#include <stdio.h>
#include <deque>
#include <string.h>
using namespace std;
int main()
{
	int n,data;
	char cmd[50];
	char t[50];
	scanf("%d",&n);
	getchar();
	deque<int> deck;
	while(n--)
	{
		gets(t);
		sscanf(t,"%s %d",&cmd,&data);
		if(strcmp(cmd,"push_front")==0)
			deck.push_front(data);
		else if(strcmp(cmd,"push_back")==0)
			deck.push_back(data);
		else if(strcmp(cmd,"pop_front")==0)
		{
			if(!deck.empty())
			{
				printf("%d\n",deck.front());
				deck.pop_front();
			}
			else
				printf("-1\n");
		}
		else if(strcmp(cmd,"pop_back")==0)
		{
			if(!deck.empty())
			{
				printf("%d\n",deck.back());
				deck.pop_back();
			}
			else
				printf("-1\n");
		}
		else if(strcmp(cmd,"size")==0)
			printf("%d\n",deck.size());
		else if(strcmp(cmd,"empty")==0)
			printf("%d\n",deck.empty());
		else if(strcmp(cmd,"front")==0)
		{
			if(!deck.empty())
				printf("%d\n",deck.front());
			else
				printf("-1\n");
		}
		else if(strcmp(cmd,"back")==0)
		{
			if(!deck.empty())
				printf("%d\n",deck.back());
			else
				printf("-1\n");
		}
	}
}