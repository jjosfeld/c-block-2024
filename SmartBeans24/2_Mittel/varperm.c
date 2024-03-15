#include <stdio.h>

int permtest(const unsigned int* p, int laenge) {
	// create and initialize 0-array to test permutation 
	int verify[laenge];
	for (int i = 0; i < laenge; i++) {
		verify[i] = 0;
	}

	// check permutation
	for (int i = 0; i < laenge; i++) {
		if ((p[i] <= 0) || (p[i] > laenge) || (verify[p[i] -1] != 0)) { // number already appeared in p
			return 0;
		}
		verify[p[i] - 1]++;
	}

	return 1;
}

// int main(void) {
// 	const unsigned int p[] = {2};
// 	printf("%d\n", permtest(p, 1));

// 	return 0;
// }