#include <stdio.h>
#include <limits.h>

int main(void) {
	int n, sum = 0;
	scanf("%d", &n);

	while (n >= 10) {
		sum = 0;
		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
		// printf("%d\n", sum);
		n = sum;
	}

	printf("%d\n", n);
	return 0;
}