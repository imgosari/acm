#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX 999999999 
int arr[1010], dp[1010];
int n;
int dfs(int pos)
{
	if (pos == n - 1) return 0;
	if (dp[pos] != -1) return dp[pos];
	dp[pos] = MAX;
	for (int i = 1; i <= arr[pos]; i++)
		dp[pos] = min(dp[pos], 1+dfs(pos+i));
	return dp[pos];
}
int main()
{ 
	scanf("%d", &n);
	for (int i = 0; i<n; i++) scanf("%d", &arr[i]);
	memset(dp, -1, sizeof(dp));
	int ans = dfs(0);
	if (ans == MAX) printf("-1");
	else printf("%d", ans); 
}