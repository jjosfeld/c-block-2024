#include <stdio.h>

int main(void) {
	char name[30];
	scanf("%s", name); // doesn't need '&' because points to first component of array

	char message[500];
	int c, i = 0;
	while((c = getchar()) != EOF) {
		message[i++] = c;
	}

	printf("Empfänger: %s\nNachricht:", name);
	for (int j = 0; j < i; j++) {
		putchar(message[j]);
	}
	return 0;
}