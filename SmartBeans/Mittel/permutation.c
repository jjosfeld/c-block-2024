#include <stdio.h>

int main(){
	int perm[9];
	int verify[10] = {0};

	int input;
	int i = 0;
	while (scanf("%d", &input) != EOF){
		if (verify[input] == 0){
			perm[i] = input;
			verify[input] = 1;
			i++;
		}
		else{
			printf("\nkeine gültige Permutation\n");
			return 0;
		}
	}
	printf("\n");
	for (int i = 1; i < 10; i++){
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i < 10; i++){
		printf("%d ", perm[i-1]);
	}
	printf("\n");

	return 0;
}