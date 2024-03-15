#include <stdio.h>
#include <ctype.h>

int main(void) {
	int bin[32]; //32 digits binary --> INT_MAX
	
	// READ IN NUMBER
	char c;
	int i = 0;
	while (scanf("%c", &c) != EOF) {
		// ERROR HANDLING
		if (c != '1' && c != '0' & !isspace(c)) { // incorrect input
			printf("%c\n",c);
			printf("Error\n");
			return 1;
		}
		if (i >= 32) { // too many digits
			printf("Error\n");
			return 1;
		}
		if (c == '1'){
			bin[i] = 1;
			i++;
		}
		if (c == '0'){
			bin[i] = 0;
			i++;
		}
		// printf("%d: %c\n", i, c);
	}

	// i: number of digits that have been entered, start working backwards from there
	int sum = 0, pow2 = 1;
	while (i > 0) {
		sum += bin[i-1] * pow2;
		i--;
		pow2 *= 2;
		// printf("%d\n", sum);
	}


	printf("%d\n", sum);

	return 0;
}