#include <stdio.h>

int suche(int * array, int len, int value){
	int low = 0, high = len - 1;
	int mid = (high + low) / 2;
	// printf("Mid = %d at index %d\n", array[mid], mid);

	while (mid != low && mid != high && array[mid] != value){
		switch(array[mid] < value){
			case 1:{
				high = mid;
				mid = (high + low) / 2;
				// printf("case 1\n");
				// printf("Mid = %d at index %d\n", array[mid], mid);
				break;
			}
			case 0:{
				low = mid+1;
				mid = (high + low) / 2;
				// printf("case 0\n");
				// printf("Mid = %d at index %d\n", array[mid], mid);
			}
		}
	}

	return (value == array[mid]);
}


// int main(){
// 	int a[] = {100,80,60,50,44,20,10};
// 	printf("%d\n", suche(a, 7, 20));
// }