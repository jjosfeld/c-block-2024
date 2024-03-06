#include <stdio.h>

int rec_contains(int** pos, int* start, int* end, int x){
	printf("start: %d, end: %d\n", *start, *end);
	
	/*Check if pointers are valid*/
	if (start == NULL || end == NULL || pos == NULL){
		printf("ERROR!");
		return 0;
	}

	/* Check if array is empty*/
	if ((start >= end) || (start < 0)){
		
		pos = NULL;
		return 0;
	}

	/* Check if array only has one component & contains x */
	int* temp = start;
	if (++temp == end){
		if (*start == x){
		// printf("x found\n");
			*pos = start;
			// printf("start: %d, pos: %d\n", start, *pos);
			return 1;
		}
		else{
			// printf("x not found\n");
			return 0;
		}
	}

	/* -------Recursion -----------------*/
	/* Set Middle Element */

	long mid = (end - start) / 2;
	// printf("mid = %ld\n", mid);
	// printf("new element = %d\n", *(start + mid));

	int a = rec_contains(pos, start, (start + mid), x);
	int b = rec_contains(pos, (start + mid), end, x);

	if (a + b == 0){
		pos = NULL;
	}
	return a + b;



}

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	int a[6] = {};
// 	int** pos = a;
// 	// int n = &a[5] - &a[0];
// 	int result = rec_contains(pos, a+0, a+0, 1);	
// 	printf("result = %d\n", result);
// 	printf("x = %d\n", *(*pos));
// 	return 0;
// }