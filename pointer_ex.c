#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int a = 5;
	int *p = &a;
	*p = *p + 7;

	printf("a: %d\n", a);
	printf("Address of a: %d\n", p);

	return 0;
}
