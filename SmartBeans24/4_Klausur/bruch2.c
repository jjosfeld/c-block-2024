#include <stdio.h>

typedef struct {
	int zaehler;
	int nenner;
} bruch_t;

int compare_rational(bruch_t x, bruch_t y);

// int main(int argc, char const * argv[]) {
// 	bruch_t a;
// 	a.zaehler = -2, a.nenner = -2;
// 	bruch_t b;
// 	b.zaehler = 1, b.nenner = 2;

// 	printf("%d\n", compare_rational(a, b));
// 	return 0;
// }

int compare_rational(bruch_t x, bruch_t y) {
	// negtive Nenner vermeiden
	if (x.nenner < 0) {
		x.zaehler *= -1;
		x.nenner *= -1;
	}
	if (y.nenner < 0) {
		y.zaehler *= -1;
		y.nenner *= -1;
	}

	int ad = x.zaehler * y.nenner;
	int bc = y.zaehler * x.nenner;

	if (ad == bc) {
		return 0;
	}
	if (ad < bc) {
		return -1;
	}
	return 1;
}