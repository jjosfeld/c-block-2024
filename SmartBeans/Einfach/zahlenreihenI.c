#include <stdio.h>
#include <math.h>

int f(int s, int n){
	for (int i = 0; i < n; i++){
		s += 2;
	}
	// printf("%d\n", s);
	return s;
}

int g(int n){
	if (n== 0)
		return 0;
	int result = (int) pow(2, n) - 1;
	return result;
}

int h(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += (i * i);
	}
	return sum;
}

// int main(){
// // 	printf("Test: f(1,8)\n");
// // 	f(1,8);
// 	printf("Test: g(2) = %d\n", g(2));
// // 	printf("Test: h(3)\n");
// // 	h(3);
// }