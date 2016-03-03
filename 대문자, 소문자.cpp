#include <stdio.h>

int main()
{ 
	char data;
	while(true)
	{
		scanf("%c", &data);
		if(data=='0') break; 
		if(data >= 65 && data <=90)
			printf("%c\n", data+32);
		else
			printf("%c\n", data-32);
		getchar();
	}
	return 0;
}