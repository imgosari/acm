#include <stdio.h>

int main()
{
	char s[300];
	char ta[300],tb[300];
	long long a, b, c, d,ra=0,rb=0;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	sprintf(ta, "%lld%lld",a,b); // printf�� ����̴ϱ� ����° �Ű������� �ι�° ���·� ù��°�� ����
	sprintf(tb, "%lld%lld",c,d);
	sscanf(ta, "%lld", &ra); // scanf�� �Է��̴ϱ� ù��° �Ű��������� �ι�° ���·� ����°�� ����
	sscanf(tb, "%lld", &rb);
	printf("%lld",ra+rb); 
}