#include <stdio.h>
#include <limits.h>

int main(){
	int x;
	scanf("%d", &x);

	int n = x;
	int i = 0;
	int threshold = (INT_MAX - 1) / 3;
	while (i < INT_MAX){
		if (x == 1){
			printf("bestätigt!\n");
			return 0;
		}
		if (x % 2 != 0 && x >= threshold){
			break;
		}

		if (x % 2 == 0){
			x /= 2;
		}
		else {
			x = 3 * x + 1;
		}

		i++;
	}
	
	printf("Leider keine Aussage möglich!\n");

	return 0;
}