#include <stdio.h>
int arr[21];
int main()
{
	int n,s,ans=0;
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	for(int i=1;i<(1<<n);i++) //  �κ������� ��� ��� ���ϴ� ��.
	{
		int sum=0;
		for(int j=0;j<n;j++) 
			if(i&(1<<j)) sum+=arr[j]; // �κ����� i�� j�� ���ԵǾ� ������, �� sum�� �κ������� ���� ��� ��츦 ���ϴ� ��.
		if(sum==s) ans++;
	}
	printf("%d",ans);
}