#include <stdio.h> 
// 입력 그대로 출력하는 문제.
int main()
{
	char c[111];
	while(scanf("%10s", c)==1) // scanf의 반환 값은 입력이 성공한 매개변수의 갯수이다.
		printf("%s\n", c);
	return 0;
} 
