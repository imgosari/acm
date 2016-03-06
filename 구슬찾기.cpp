#include <stdio.h>
int arr[101][101];
int main()
{
	int n, t, ans = 0;
	scanf("%d %d", &n, &t);
	for (int i = 0; i < t; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
	}
	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (arr[i][k] && arr[k][j])
					arr[i][j] = 1;
			}
		}
	} 
	int mid = (n / 2) + 1;
	for (int j = 1; j <= n; j++)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
			sum += arr[j][i];
		if (sum >= mid) ans++;
	}
	for (int j = 1; j <= n; j++)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
			sum += arr[i][j];
		if (sum >= mid) ans++;
	}
	printf("%d", ans);
} 