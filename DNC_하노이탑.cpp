#include <stdio.h> 
#include <math.h>
void move(int n, int from, int by, int to) // n개를, from에서 by를 이용하여 to로 옮겨라.
{
	if(n==1)
	{
		printf("%d %d\n", from, to);
		return;
	}
	move(n-1, from, to, by); // n-1개를, from에서 to를 이용하여 by로 옮겨라.
	printf("%d %d\n", from, to);
	move(n-1, by, from, to); // n-1개를, by에 있는 것을 from을 이용하여 to로 옮겨라.
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n", ((int)pow((double)2,n))-1);
	move(n,1,2,3);
}