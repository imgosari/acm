#include <stdio.h>
int arr[1010],incdp[1010],decdp[1010];
int result;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		incdp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i]&&incdp[j]>=incdp[i])
				incdp[i]=incdp[j]+1; 
		}
	} // ���� Ŀ���� ���� ������ �ִ� ���� ����
	for(int i=n-1;i>=0;i--)
	{
		decdp[i]=1;
		for(int j=i+1;j<n;j++) // �ڿ������� �;���.
		{
			if(arr[i]>arr[j]&&decdp[i]<=decdp[j])
				decdp[i]=decdp[j]+1;
		}
	} // ���� �۾����� ������ �ִ� ���� ����
	for(int i=0;i<n;i++)
	{
		if((incdp[i]+decdp[i])-1>=result) // �� ��쿡�� �ִ밪�� ����.
			result=(incdp[i]+decdp[i])-1;
	}
	printf("%d",result);
}