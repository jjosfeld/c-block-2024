#include <stdio.h>

// int main(){
// 	int x, sum = 0;
// 	scanf("%d", &x);

// 	while (x != 0){
// 		sum += x % 10;
// 		x /= 10;
// 	}

// 	printf("%d\n", sum);

// 	return 0;
// }

// ITERIERTE QUERSUMME
// int main(){
// 	int x;
// 	scanf("%d", &x);
// 	int sum = x;

// 	while (x >= 10){
// 		sum = 0;
// 		while (x != 0){
// 			sum += x % 10;
// 			x /= 10;
// 		}
// 		x = sum;
// 		// printf("x = %d\n", x);
// 	}


// 	printf("%d\n", sum);

// 	return 0;
// }


//AlERNIERENDE QUERSUMME

int main(){
	int x, sum = 0, odd = 1;
	scanf("%d", &x);

	while (x != 0){
		if (odd){
			sum += x % 10;
			odd = 0;
		}
		else {
			sum -= x % 10;
			odd = 1;
		}
		x /= 10;
	}

	printf("%d\n", sum);

	return 0;
}