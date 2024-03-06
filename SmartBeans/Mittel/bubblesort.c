#include <stdio.h>

void sort(int * a, int len){
	for (int i = len - 1; i >= 0; i--){
		for (int j = 0; j < i; j++){
			if (a[j] > a [j + 1]){
				int temp = a[j];
				a[j] = a [j + 1];
				a[j + 1] = temp;
			}
		}
	}
}


// int main(){
// 	int n;
// 	scanf("%d", &n);

// 	int arr[n];

// 	/* READ IN ARRAY AND PRINT */
// 	int x;
// 	for (int i = 0; i < n; i++){
// 		scanf("%d", &x);
// 		arr[i] = x;
// 		printf("%d ", x);
// 	}
// 	printf("\n");


// 	/*SORT ARRAY AND PRINT*/

// 	sort(arr,  n);

// 	for (int i = 0; i < n; i++){
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// }