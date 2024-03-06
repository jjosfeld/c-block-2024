#include <stdio.h>
#include <math.h>

long iteA(unsigned int n){
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return -2 * iteA(n - 1) + 3 * iteA(n - 2);
}

// int main(){
// 	printf("Test: iteA(5) = %ld\n", iteA(5));
// 	return 0;
// }