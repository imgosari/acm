#include <stdio.h>
int gcd(int a, int b) // ��Ŭ���� ȣ�������� gcd���ϱ�
{
	if(b==0)
		return a;
	else
		gcd(b, a%b);
}
int main()
{   
	int a,b,g;
	scanf("%d %d",&a,&b);
	g=gcd(a,b);
	printf("%d",g);
	//printf("%d\n%d", g,g*(a/g)*(b/g)); 
}