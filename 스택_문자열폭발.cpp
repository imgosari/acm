#include <stdio.h>
#include <string.h>  
int alen,blen,ridx;
char a[1000001],r[1000001],b[37];
int main()
{   
	alen=strlen(gets(a));
	blen=strlen(gets(b));  
	for(int i=0;i<alen;i++)
	{ 
		r[ridx++]=a[i];
		int k=ridx-blen;
		if(!strncmp(r+k,b,blen))  
		{ 
			ridx = ridx-blen;
			for(int p=ridx;p<ridx+blen;p++)
				r[p]='\0';
		} 
	} 
	if(r[0]=='\0') printf("FRULA");
	else
	{
		for(int i=0;i<ridx;i++)
			printf("%c",r[i]);
	}
}