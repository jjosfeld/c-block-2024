#include <stdio.h>
#include <limits.h>

int findmin(int * arr, int start, int length){
	int min = INT_MAX, min_i = start; 
	for (int i = start; i < length; i++){
		if (arr[i] < min){
			min = arr[i];
			min_i = i;
		}
	}

	return min_i;
}

void swap(int * arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	return;
}


int main(){
	int n;
	scanf("%d", &n);

	int arr[n];

	/* READ IN ARRAY AND PRINT */
	int x;
	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		arr[i] = x;
		printf("%d ", x);
	}
	printf("\n");


	/*SORT ARRAY AND PRINT*/

	for (int i = 0; i < n; i++){
		swap(arr, i, findmin(arr, i, n));
		printf("%d ", arr[i]);
	}
	printf("\n");



}