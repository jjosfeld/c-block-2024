#include <stdio.h>

int main(){
	int arr[10];
	for (int i = 0; i <= 9; i += 2){
		// printf("%d\n", i);
		arr[i] = 1; arr [i + 1] = 0;
	}
	for (int i = 0; i <= 9; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}