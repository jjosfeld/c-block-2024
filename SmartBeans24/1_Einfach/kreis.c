#include <stdio.h>

#define PI 3.14159265

double kreisflaeche(double durchmesser) {
	return PI * (durchmesser / 2) * (durchmesser / 2);
}

double kreisumfang(double durchmesser) {
	return PI * durchmesser;
}

// int main(void) {
// 	printf("%f\n", kreisflaeche(1));
// 	printf("%f\n", kreisumfang(100));
// 	return 0;
// }