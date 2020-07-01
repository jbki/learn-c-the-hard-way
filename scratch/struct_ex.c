#include <stdio.h>

/*  struct is an 'object' in C
	sizeof a struct is determined by the sum of the
	data types in it. below is 5 bytes long
*/
struct test 
{
	int x;
	char y;
};

int main(int argc, char *argv[]) 
{
	struct test ex;
	ex.x = 65;
	ex.y = 'c';

	struct test* ex1 = &ex;

	printf("The value of x in our union is %d\n", ex1->x);
	printf("The value of y in our union is %c\n", ex1->y);
}
