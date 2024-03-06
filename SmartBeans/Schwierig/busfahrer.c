#include <stdio.h>
#include <stdlib.h>

int * fahrgaeste(int einaus[][2], int n){
	int * gaeste;
	gaeste = (int *) malloc (n * sizeof(int));

	int guests = 0;
	for (int i = 0; i < n; i++){
		guests = guests + einaus[i][0] - einaus[i][1];
		gaeste[i] = guests;
	}

	return gaeste;
}

// int main(){
// 	int einaus[5][2] = {{5, 0},{4, 2},{5, 1},{5, 2},{0, 1}};
// 	int* gaeste = fahrgaeste(einaus, 5);
	
// 	printf("{");
// 	for(int i = 0; i < 4; i++){
// 		printf("%d, ", gaeste[i]);
// 	}
// 	printf("%d}\n", gaeste[4]);
// }