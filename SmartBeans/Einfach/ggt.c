#include <stdio.h>

unsigned long ggT(unsigned long a, unsigned long b){
	// if (b > a){
	// 	unsigned long temp = b; 
	// 	b = a; a = temp;
	// }
	if (b > 0){
		return ggT(b, a % b);
	}
	else{
		return a;
	}
}

// int main(){
// 	long a, b;
// 	scanf("%lu", &a);
// 	scanf("%lu", &b);
// 	// printf("ggt (%lu, %lu) = %lu\n", a, b, a+b);
// 	printf("ggt (%lu, %lu) = %lu\n", a, b, ggT(a, b));
// 	return 0;
// }