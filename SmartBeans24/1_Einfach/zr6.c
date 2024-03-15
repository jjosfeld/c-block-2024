#include <stdio.h>

long iteP(unsigned int k) {
	if (k == 0) {
		return 3;
	}
	if (k == 1) {
		return 0;
	}
	if (k == 2) {
		return 2;
	}

	int a = 3, b = 0, c = 2, sum = 0;
	for (int i = 3; i <= k; i++) {
		sum = b + a;
		a = b;
		b = c;
		c = sum;
	}
	return sum;
}

// int main(void) {
// 	printf("%ld\n", iteP(8));
// 	return 0;
// }