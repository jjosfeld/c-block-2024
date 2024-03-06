#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int is_perm(const int perm[], int length){
	int result = 1;
	int * test;
	test = (int *) malloc (length * sizeof(int));	
	if (test == NULL || perm == NULL){
		result = -1;
	}
	else{
		// MIT 0 INITIALISIEREN 
		for (int i = 0; i < length; i++){
			test[i] = 0;
		}

		// AUF PERM PRÜFEN

		int sum = 0;
		for (int i = 0; i < length; i++){
			// printf("i = %d, perm[i] = %d, test[i] = %d\n", i, perm[i], test[perm[i]]);
			int pi = perm[i];
			if (pi <= 0 || pi > length){
				result = 0;
				break;
			}
			else if (test[pi] != 0){
				result = 0;
				break;
			}
			else{
				test[pi]++;
				sum += (pi);
			}
		}

		if (sum == (length + 1) * length / 2){
			result = 1;
		}




		// for (int i = 0; i < length; i++){
		// 	// printf("i = %d, perm[i] = %d, test[i] = %d\n", i, perm[i], test[perm[i]]);
		// 	int pi = perm[i];
		// 	if (pi <= 0 || pi > length){
		// 		result = 0;
		// 		break;
		// 	}
		// 	else if (test[pi] != 0){
		// 		result = 0;
		// 		break;
		// 	}
		// 	else{
		// 		test[pi] = 1;
		// 	}
		// }
	}
	free(test);
	return result;
}

	// int main(){
	// 	int p1[] = {5, 4, 3, 1, 2};
	// 	printf("%d\n", is_perm(p1, 5));
		
	// 	// free(p1);
	// 	return 0;
	// }