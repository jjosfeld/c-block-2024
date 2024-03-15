#include <stdio.h>
#include <stdlib.h>

int *bucket_sort( int values[], int length, int max );


// /* MAIN ==================================*/
// int main(int argc, char const *argv[])
// {
// 	int a[] = {5,3,6,1,5,4,8,9,6,6,6};
// 	int *result = bucket_sort(a, 11, 20);
// 	if (result == NULL) {
// 		printf("NULL\n");
// 		return 1;
// 	}
// 	for (int i = 0; i < 11; i++) {
// 		printf("%d ", result[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }

/* FUNCTIONS =============================*/
int *bucket_sort( int values[], int length, int max ) {
	if (max < 0) {
		return NULL;
	}

	int *arr;
	arr = (int *) malloc((max + 1) * sizeof(int));
	if (arr == NULL || values == NULL) {
		free(arr);
		return NULL;
	}

	for (int i = 0; i < length; i++) {
		if (values[i] > max) {
			free(arr);
			return NULL;
		}	
		arr[values[i]]++;
	}

	// durchlaufe array und schreibe values neu
	int val_i = 0; // index in array values
	for (int i = 0; i <= max; i++) {
		for (int j = 0; j < arr[i]; j++) {
			values[val_i++] = i;
		}
	}

	free(arr);
	return values;
}