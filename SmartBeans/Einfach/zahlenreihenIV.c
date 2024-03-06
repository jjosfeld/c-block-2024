#include <stdio.h>

long iteA(unsigned int n){
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	long z, x = 1, y = 0;
	for(int i = 2; i <= n; i++){
		z = -2 * x + 3 * y;
		y = x; x = z;
	}
	return z;
}

// int main(){
// 	printf("Test: iteA(5) = %ld\n", iteA(5));
// 	return 0;
// }