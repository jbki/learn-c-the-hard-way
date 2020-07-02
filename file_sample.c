#include <stdio.h>

int main(int argc, char *argv[]) 
{
	FILE *fp;
	char str[60];

	fp = fopen("file.txt", "r");
	if(fp == NULL) {
		puts("Error reading file");
		return(-1);
	} 

	if(fgets(str, 120, fp) != NULL) {
		puts(str);
	}

	fclose(fp);

	return 0;

}
