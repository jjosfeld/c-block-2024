#include <stdio.h>

int main(int argc, char const *argv[])
{
	char name[30];
	scanf("%s", name);

	int c;
	int message[500];
	int i = 0;
	while ((c = getchar()) != EOF){
		message[i++] = c;
	}

	printf("Empfänger: %s\n", name);
	printf("Nachricht:");
	for (int j = 0; j < i; j++){
		putchar (message[j]);
	}
	return 0;
}