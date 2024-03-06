#include <stdio.h>
#include <stdlib.h>

void printMyArray(int * a, int len){
	printf("{");
	for (int i = 0; i < len-1; i++){
		printf("%d, ", a[i]);
	}
	printf("%d}\n", a[len-1]);
}

// void printMyArray(int * a, int low, int high){
// 	printf("{");
// 	for (int i = low; i < high; i++){
// 		printf("%d, ", a[i]);
// 	}
// 	printf("%d}\n", a[high]);
// }

void sort(int * array, int low, int high){
	// printf("Partition %d - %d = ", low, high);
	if (low == high){
		// printf("{%d}\n", array[low]);
		return;
	}
	// printMyArray(array, low, high);

	int temp;

	int pivot_index = low + (rand() % (high-low+1));	// Set pivot
	int pivot = array[pivot_index];
	// printf("pivot = %d, index = %d\n", pivot, pivot_index);

	array[pivot_index] = array[high];		// Swap pivot with high
	/*
	* Since the pivot is stored separately and the pivot index is 
	* equal to 'high', no extra moving around is needed!
	*/


	int i = low, j = low;		//indices for partitioning

	while (i <= high - 1){
		if (array[i] <= pivot){
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			j++;
		}
		i++;
	}

	array[high] = array[j];
	array[j] = pivot;
	pivot_index = j;

	if (pivot_index == low){
		sort(array, low + 1, high);
	}
	else if (pivot_index == high){
		sort(array, low, high - 1);
	}
	else{
		sort(array, low, pivot_index - 1);
		sort(array, pivot_index + 1, high);
	}

}




// int main(){

// 	int a[12] = {52, -33, 189, 375, 195, -33, 
// 		30, 49, 52, 1, 375, 15};

// 	sort(a,  0, 11);
// 	printMyArray(a, 12);


// 	// int i = 25;
// 	// while(i--){
// 	// 	printf("%d ", rand() % 12);
// 	// }
// 	// printf("\n");
// 	return 0;
// }