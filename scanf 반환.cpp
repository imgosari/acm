#include <stdio.h> 
// �Է� �״�� ����ϴ� ����.
int main()
{
	char c[111];
	while(scanf("%10s", c)==1) // scanf�� ��ȯ ���� �Է��� ������ �Ű������� �����̴�.
		printf("%s\n", c);
	return 0;
} 
