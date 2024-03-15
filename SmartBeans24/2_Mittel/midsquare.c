#include <stdio.h>
#include <stdlib.h>

int *middle_square(int seed);

// int main(int argc, char const *argv[])
// {
// 	int *out = middle_square(15);
// 	for (int i = 0; i < 20; i++) {
// 		printf("%d\n", out[i]);
// 	}

// 	if (out) {
// 		free(out);
// 	}
// 	return 0;
// }

int *middle_square(int seed) {
	if (seed < 10) {
		return NULL;
	}

	int *out;
	out = malloc(100 * sizeof(int));
	if (out == NULL) {
		return NULL;
	}

	for (int i = 0; i < 100; i++) {
		out[i] = seed;
		seed *= seed;
		if (seed > 10) {
			seed = (seed/10) % 100;
		}
	}

	return out;
}