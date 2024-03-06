#include <stdio.h>

int f(int n){
	if (n == 0)
		return 1;
	if (n == 1)
		return 3;
	int a = 1, b = 3, result = 0;
	for (int i = 2; i <= n; i++){
		result = b + 2 * a;
		a = b; b = result;
	}
	return result;
}

int g(int n){
	if (n == 0)
		return 1;
	int result = g(n-1);
	if ((result - 1) % 4 == 0)
		return result * 2 + 1;
	else
		return result * 2 - 1;
}

int h(int a, int b, int n){
	int result;
	if (n == 0)
		return a;
	if (n == 1)
		return b;
	
	for(int i = 2; i <= n; i++)
		if (i % 2 == 0){
			result = b - a;
			a = b; b = result;
		}
		else{
			result = a + b;
			a = b; b = result;
		}
	return result;
}

// int main(){
// 	printf("Test: f(4) = %d\n", f(8));

// 	printf("Test: g(2) = %d\n", g(8));
	
// 	printf("Test: h(3, 3, 4) = %d\n", h(3,3,4));
// 	return 0;
// }