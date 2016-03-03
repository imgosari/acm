#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<pair<int, int>> a(n); 
void main()
{  
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d %d", &a[i].first, &a[i].second);
	sort(a.begin(), a.end());
 
}