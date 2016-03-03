#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct point
{
	int x,y;
};
bool cmp(const point &u, const point &v)
{
	if(u.y < v.y) // y��ǥ ������ �����ϱ�
		return true;
	else if(u.y == v.y) // y��ǥ�� ���ٸ� x��ǥ ������ �����ϱ�.
		return u.x < v.x;
	else
		return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	vector<point> arr(n);
	for(int i=0;i<n;i++)
		scanf("%d %d",&arr[i].x,&arr[i].y);
	sort(arr.begin(), arr.end(), cmp);
	for(int i=0;i<n;i++)
		printf("%d %d\n",arr[i].x,arr[i].y);
}