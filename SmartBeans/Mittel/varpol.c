#include <stdio.h>


int main(){
	int deg;
	scanf("%d", &deg);

	double coefficients[deg + 1];

	double cof;
	for (int i = deg; i >= 0; i--){
		scanf("%lf", &cof);
		coefficients[i] = cof;
	}

	double x, y;

	while (scanf("%lf", &x) != EOF){	
		y = 0.0;
		for (int i = deg; i >= 1; i--){
			y = (y + coefficients[i]) * x;
		}
		y += coefficients[0];
		printf("%f\n", y);
	}

	return 0;
}