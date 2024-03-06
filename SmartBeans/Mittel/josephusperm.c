#include <stdio.h>
#include <string.h>


int main(){
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);

	int circle[n];
	for (int i = 0; i < n; i++){
		circle[i] = 0;
	}

	int start = -1;

	for (int round = 1; round <= n; round++){

		for (int i = 0; i < n; i++){
			// printf("%d ", circle[i]);
		}
		// printf("\n");

		int index = start;
		int steps = 0;
		while (steps < k){
			index = (index + 1) % n;
			// printf("Index: %d, Wert %d\n", index, circle[index]);
			if (circle[index] == 0){
				// printf("Index %d\n", index);
				steps ++;
			}
		}

		circle[index] = round;
		start = index;

	}
	

	for (int i = 0; i < n; i++){
		printf("%d ", circle[i]);
	}
	printf("\n");

	return 0;

}


		// int test;
		// while (scanf("%d", &test) != EOF){
		// 	continue;
		// }
