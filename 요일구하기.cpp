#include <stdio.h>
int y,m,d;
int day_of_week(int y, int m, int d)
{
	static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
	y-=m < 3;
	return (y +y/4-y/100+y/400+t[m-1]+d) %7;
}
int main()
{
	char *day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT" };
	scanf("%d %d",&m,&d);
	printf("%s\n", day[day_of_week(2007,m,d)]);
	return 0;
}