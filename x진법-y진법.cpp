#include <stdio.h>
#include <math.h>
int arr[26];
void algo(int data, int a)
{
	if(data==0) return;
	algo(data/a, a);
	printf("%d ",data%a); // ���ÿ��� �������� �����.
}
int main()
{
	int a,b,n,len,sum=0,i,s=0;
	scanf("%d %d",&a,&b);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	len=i;
	for(i=len-1;i>=0;i--)
		sum += arr[i]*pow((double)a,s++);
	algo(sum,b);
}