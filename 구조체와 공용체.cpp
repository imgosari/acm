#include <stdio.h>

typedef struct P
{
	long a;
	double b;
	short c;
	int d;
	char e;
};

typedef union
{
    char a;
    double b;
    short c;
    int d;    
}UTest;
int main()
{
	P p;
	UTest ut;
	printf("%d", sizeof(ut));
}