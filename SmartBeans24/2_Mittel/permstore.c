#include <stdio.h>
#include <stdlib.h>

int is_perm(const int perm[], int length) {
	// create testing array on the heap
	int result = 1;
	int * test;
	test = (int * ) malloc ((length + 1) * sizeof(int));
	if (test == NULL || perm == NULL) {
		result = -1;
	}
	else {
		// initialize array with 0
		for (int i = 0; i <= length; i++) {
			test[i] = 0;
		}

		for (int i = 0; i < length; i++) {
			if (perm[i] <= 0 || perm[i] > length || test[perm[i]] != 0) {
				result = 0;
				break;
			}
			test[perm[i]]++;
		}
	}


	free(test);
	return result;
}

// int main(void) {
// 	int * p1;
// 	printf("%d\n", is_perm(p1, 5));
// 	return 0;
// }