#include <stdio.h>
int arr[100];
int jin=2;
void algo(int n, int idx)
{
	if(n<=1)
	{
		printf("%d",n);
		return;
	}
	int t = arr[n/2];
	algo(n/2, idx+1);
	arr[idx] = n%2;
	printf("%d",arr[idx]);
}

int main()
{
	algo(100,0); 
}