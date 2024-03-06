#include <stdio.h>
#include <stdlib.h>

int * bucket_sort(int values[], int length, int max){
	int * result;
	result = (int *) malloc ((max + 1) * sizeof(int));
	if (result == NULL || values == NULL){
		free (result);
		return NULL;
	}
	else{
		for (int i = 0; i <= max; i++){
			result[i] = 0;
		}

		for (int i = 0; i < length; i++){
			int x = values [i];
			if (x > max){
				free (result);
				return NULL;
			}
			else{
				result[x]++;
			}
		}

		int j = 0; 	//index values[]
		for (int i = 0; i <= max; i++){
			for (int k = 0; k < result[i]; k++){
				values[j++] = i;
			}
		}
	}

	free(result);
	return values;
}

// int main(){
// 	int a[] = {5, 3, 6, 1, 5, 4, 8, 9, 6, 6, 6};
// 	int * result = bucket_sort(a, 11, 20);

// 	printf("result = {");
// 	for (int i = 0; i < 10; i++){
// 		printf("%d,", result[i]);
// 	}
// 	printf("%d}\n", result[10]);

// 	return 0;
// }