#include <stdio.h>

int main()
{
	char s[300];
	char ta[300],tb[300];
	long long a, b, c, d,ra=0,rb=0;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	sprintf(ta, "%lld%lld",a,b); // printf는 출력이니까 세번째 매개변수를 두번째 형태로 첫번째에 저장
	sprintf(tb, "%lld%lld",c,d);
	sscanf(ta, "%lld", &ra); // scanf는 입력이니까 첫번째 매개변수에서 두번째 형태로 세번째에 저장
	sscanf(tb, "%lld", &rb);
	printf("%lld",ra+rb); 
}