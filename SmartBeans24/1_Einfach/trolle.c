#include <stdio.h>

// convert decimal input into troll number system 
int main(void) {
	// read in decimal number
	int decimal;
	scanf ("%d", &decimal);

	// print "viele" up to >= 8
	for (int i = 1; i < decimal / 4; i++) {
		printf("viele-");
	}
	if (decimal >= 4 && decimal % 4 == 0) {
		printf("viele\n");
	}
	else {
		if (decimal >= 4) {
			printf("viele-");
		}
		printf("%d\n", decimal % 4);
	}

	return 0;
}