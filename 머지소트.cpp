#include <stdio.h>
int a[1000001];
int b[1000001];
int c[2000002];
int main()
{
	int as=0,bs=0,al,bl,cs=0;
	scanf("%d %d",&al,&bl);
	for(int i=0;i<al;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<bl;i++)
		scanf("%d",&b[i]);
	while(as<al&&bs<bl)
	{
		if(a[as]<=b[bs]) 
			c[cs++]=a[as++];
		else 
			c[cs++]=b[bs++];
	}
	while(as<al) c[cs++]=a[as++];
	while(bs<bl) c[cs++]=b[bs++];
	for(int i=0;i<cs;i++) 
			printf("%d ",c[i]);
}