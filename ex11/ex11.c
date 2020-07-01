#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = { 0 };
	char name[4] = { 'a' };
	printf("Numbers: %d %d %d %d\n", numbers[0],
			numbers[1], numbers[2], numbers[3]);
	printf("Chars: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

	// char[] is a string
	printf("Name: %s\n", name);

	// set up numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	name[0] = 'C';
	name[1] = 'a';
	name[2] = 'n';
	name[3] = '\0';

	printf("Numbers: %d %d %d %d\n", numbers[0],
			                        numbers[1], numbers[2], numbers[3]);
        printf("Chars: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

        // char[] is a string
        printf("Name: %s\n", name);

	return 0;
}
