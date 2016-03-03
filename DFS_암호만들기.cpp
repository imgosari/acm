#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
char arr[20],step[20];
int l,c;
int check(char* s)
{
	int mo=0,ja=0;
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117) mo++;
		else ja++;
	}
	if(mo>=1&&ja>=2) return 1;
	else return 0;
}
void dfs(char idx, int s)
{
	step[s]=arr[idx];
	if(s==l-1)
	{
		if(check(step))
		{
			for(int i=0;i<l;i++)
				printf("%c",step[i]);
			printf("\n");
		}
		return;
	} 
	for(int i=idx+1;i<c;i++)
		dfs(i,s+1);
	 
}  
int comp(const void* a, const void* b)
{
	return strcmp((char*)a, (char*)b);
} 
int main()
{  
	scanf("%d %d",&l,&c);
	getchar();
	for(int i=0;i<c;i++) 
	{
		scanf("%c",&arr[i]);
		getchar();
	}
	qsort(arr,c,sizeof(char),comp);
	for(int i=0;i<c;i++)
		dfs(i,0); 
}