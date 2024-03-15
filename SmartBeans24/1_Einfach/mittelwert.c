#include <stdio.h>

int main(void) {
	float x, average = 0;
	float i = 1.0;
	while (scanf("%f", &x) != EOF) {
		average = (average * (i-1) / i) + x/i;
		i++;
	}
	printf("%f\n", average);
	return 0;
}