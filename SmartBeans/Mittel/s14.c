#include <stdio.h>
#include <math.h>

int main(){
	int nos[1001] = {0};

	for (int i = 2; i <= 1000; i++){
		if (nos[i] == 0){
			int j = i + i;
			while (j <= 1000){
				nos[j] = 1;
				j += i;
			}
		}
	}

	for (int j = 2; j <= 1000; j++){
		if (nos[j] == 0)
			printf("%d ", j);
	}
	printf("\n");
	return 0;
}