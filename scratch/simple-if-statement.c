#include <stdio.h>

typedef enum WEEKDAYS { Monday, Tuesday, Wednesday, Thursday, Friday } WEEKDAY;

int main(int argc, char *argv[]) 
{
	
	int x = 65;

	WEEKDAY day = Monday;

	printf("The day is: %d", day);

	if(x == 65) {
		printf("%d", x);
	} else if (x == 66) {
		printf("x isn't 65. it is: %d\n", x);
	} else {
		printf("what is x? x is : %d\n", x);
	}

	switch(x) {
		case 65:
			printf("inside switch statement x = %d\n", x);
			break;
		case 66:
			printf("switch statement x = %d\n", x);
			break;
		default:
			printf("what is x?\n");
			break;
	}

	int i = 0;
	for(i = 0; i < 3; i++) {
		printf("%d\n", i);
	}

}
