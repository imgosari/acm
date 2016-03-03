#include <stdio.h>
int tree[27][2];
void pre(int n)
{
	if(n==-1) return;
	printf("%c",n+'A');
	pre(tree[n][0]);
	pre(tree[n][1]);
}
void in(int n)
{
	if(n==-1) return;
	in(tree[n][0]);
	printf("%c",n+'A');
	in(tree[n][1]);
}
void post(int n)
{
	if(n==-1) return;
	post(tree[n][0]); 
	post(tree[n][1]); 
	printf("%c",n+'A');
}
int main()
{ 
	int n;
	scanf("%d",&n);  
	for(int i=0;i<n;i++)
	{
		getchar();
		char a,b,c;
		scanf("%c %c %c",&a,&b,&c);
		int idx=a-'A'; 
		if(b!='.')
			tree[idx][0]=b-'A';
		else
			tree[idx][0]=-1;
		if(c!='.')
			tree[idx][1]=c-'A';
		else
			tree[idx][1]=-1;
	} 
	pre(0);
	printf("\n");
	in(0);
	printf("\n");
	post(0);
} 