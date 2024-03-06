#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
	int n;
	scanf("%d", &n);

	// FIND POSSIBLE PRIMES USING ERATOSTHENES
	int limit = (int) sqrt(n);
	// int limit = (int) sqrt(INT_MAX);
	// printf("limit: %d\n", limit);
	int nos[limit + 1];
	for (int i = 0; i <= limit; i++){
		nos[i] = 0;
	}

	int no_primes = 0;
	for (int i = 2; i <= limit; i++){
		if (nos[i] == 0){
			// printf("Got Prime: %d\n", i);
			no_primes++;
			int j = i + i;
			while (j <= limit){
				// printf("j: %d\n", j);
				nos[j] = 1;
				j += i;
			}
		}
	}

	printf("%d:", n);
	int i = 2;
	while (i <= limit){
	// while (n > 1){
		if (nos[i] == 0){
			while (n % i == 0){
				printf(" %d", i);
				n /= i;
			}
		}
		i++;
	}
	if (n != 1)
		printf(" %d", n);

	// int primes[no_primes];
	// int i = -1;
	// for (int k = 2; k <= limit; k++){
	// 	if (nos[k] == 0)
	// 		primes[++i] = k;
	// }

	// // for (int i = 0; i < no_primes; i++){
	// // 	printf("%d ", primes[i]);
	// // }

	printf("\n");
	return 0;
}