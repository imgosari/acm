#include <stdio.h> 
int main()
{
	int max=1<<31,n,temp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(temp<0) temp=t; // -�� ������ ���� �����ֱ�
		else temp+=t; // ����� ��� ���ϱ�
		if(max<temp)
			max=temp; 
	}
	printf("%d",max);
}