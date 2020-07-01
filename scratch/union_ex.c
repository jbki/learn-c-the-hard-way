#include <stdio.h>

/* union is like struct and how we make an 'object' in C
   unlike struct, the total size of it is determined by
   the largest sized type in the union.
	Here the size of test will be 4 bytes.
*/
union test 
{
	int x;
	char y;
};

int main(int argc, char *argv[]) 
{
	union test ex;
	ex.x = 65;

	union test* ex1 = &ex;

	printf("The value of x in our union is %d\n", ex1->x);
	printf("The value of y in our union is %c\n", ex1->y);
}
