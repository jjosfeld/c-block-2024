#include <stdio.h>

int f(int n) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 3;
	}
	int a = 1, b = 3, sum = 0; // a = F[n-2], b = F[n-1] 
	for (int i = 2; i <= n; i++) {
		sum = b + 2 * a;
		a = b;
		b = sum;
	}
	return sum;
}

int g(int n) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 3;
	}
	return g(n-1) + 2 * (g(n-2));
}

int h(int a, int b, int n) {
	if (n == 0) {
		return a;
	}
	if (n == 1) {
		return b;
	}
	if (n % 2 == 0) {
		return h(a,b,n-1) - h(a,b,n-2);
	}
	else {
		return h(a,b,n-1) + h(a,b,n-2);
	}
}


// int main(void) {
// 	printf("%d\n", f(4));
// 	printf("%d\n", g(2));
// 	printf("%d\n", h(3,3,4));
// 	return 0;
// }