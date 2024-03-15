#include <stdio.h>

long iteA(unsigned int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}

	int a = 0, b = 1, sum = 0;
	for (int i = 2; i <= n; i++) {
		sum = (-2) * b + 3 * a;
		a = b;
		b = sum;
	}
	return sum;
}

// int main(void) {
// 	printf("%ld\n", (iteA(5)));
// 	return 0;
// }