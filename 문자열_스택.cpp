#include <stdio.h>
#include <string.h>
#include <malloc.h>
char stack[100][10];
char cmd[10];
char data[100];
int top = -1;
int main()
{
	while(1)
	{
		scanf("%s", &cmd); 
		if(strcmp(cmd, "exit")==0) // ���ڿ� �񱳴� strcmp�� 0�� �� ���� �� �Ǵ�.
			break;
		else if(strcmp(cmd, "push")==0)
			scanf("%s", &stack[++top]);
		else if(strcmp(cmd, "pop")==0)
			memset(stack[top--],0,100);
	}
	for(int i=0;i<=top;i++)
		printf("%s\n", stack[i]);
	return 0;
} 