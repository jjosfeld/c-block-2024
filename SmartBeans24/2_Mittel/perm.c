#include <stdio.h>

int main(void) {
	int perm[9];
	int verify[10] = {0};

	// read in permutation
	int i = 0, n;
	while (scanf("%d", &n) != EOF) {
		// make sure no more than 9 numbers are entered
		// check permutation
		if (i > 8 || verify[n] != 0) {
			printf("keine gültige Permutation.\n");
			return 1;
		}
		perm[i] = n;
		verify[n] = 1;
		i++;
	}

	for (int i = 1; i < 10; i++) {
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 0; i < 9; i++) {
		printf("%d ", perm[i]);
	}
	printf("\n");

	return 0;
}