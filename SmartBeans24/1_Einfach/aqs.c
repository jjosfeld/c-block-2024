#include <stdio.h>

int main(void) {
	int n, sum = 0, add = 1;
	scanf("%d", &n);

	while (n > 0) {
		sum += add * (n % 10);
		n /= 10;
		add *= -1;
	}

	printf("%d\n", sum);


	return 0;
}