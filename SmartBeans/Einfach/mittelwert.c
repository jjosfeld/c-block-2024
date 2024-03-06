#include <stdio.h>

int main(){
	float x, sum;
	int numbers;
	while (scanf("%f", &x) != EOF){
		sum += x;
		numbers++;
	}
	printf("\n%f\n", sum/numbers);
}