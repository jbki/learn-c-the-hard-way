#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int studentScores[] = { 94, 72, 89, 92, 99, 67, 54 };
	int size = (int) sizeof(studentScores) / sizeof(int);
	int total = 0;
	for(int i = 0; i < size; i++) {
		total += studentScores[i];
	}

	printf("Average student scores: %d\n", total/size);

	return 0;
}
