#include <stdio.h>
#include <math.h>

int f(int s, int n) {
	if (n == 0) {
		return s;
	}
	return f(s, n-1) + 2;
}

int g(int n) {
	int result = (int) pow(2, n) -1;
	 return result;
}

int h(int n) {
	if (n == 1) {
		return 1;
	}
	return (h(n-1) + n * n);
}

// int main(void) {
// 	printf("%d\n", f(1,8));
// 	printf("%d\n", g(0));
// 	printf("%d\n", h(3));
// 	return 0;
// }