#include <stdio.h> 
#include <math.h>
void move(int n, int from, int by, int to) // n����, from���� by�� �̿��Ͽ� to�� �Űܶ�.
{
	if(n==1)
	{
		printf("%d %d\n", from, to);
		return;
	}
	move(n-1, from, to, by); // n-1����, from���� to�� �̿��Ͽ� by�� �Űܶ�.
	printf("%d %d\n", from, to);
	move(n-1, by, from, to); // n-1����, by�� �ִ� ���� from�� �̿��Ͽ� to�� �Űܶ�.
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n", ((int)pow((double)2,n))-1);
	move(n,1,2,3);
}