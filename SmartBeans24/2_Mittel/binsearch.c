#include <stdio.h>

// PROTOTYPES ===============================
int suche(int *array, int len, int value);


// // MAIN ======================================
// int main(int argc, char const *argv[])
// {
// 	int a[] = {100,80,60,50,44,20,10,0};
// 	printf("%d\n", suche(a, 8, 75));
// 	return 0;
// }

// FUNCTIONS =================================
int suche(int *array, int len, int value) {
	// Leeres Array übergeben?
	if (array == NULL) {
		return -1;
	}

	int i = 0, j = len;
	
	while (j - i > 0) {
		// mittlerer Index: n/2 oder (n/2)+1, array startet mit 0!
		int mid_i = i + (j-i-1) / 2;
		// printf("i: %d j: %d mid: %d\n", i,j,mid_i);
		// found value?
		if (array[mid_i] == value) {
			return 1;
		}

		// divide
		if (value < array[mid_i]) {
			i = mid_i + 1;
		}
		else {
			j = mid_i;
		}
	}
	// value has not been found;
	return 0;
}