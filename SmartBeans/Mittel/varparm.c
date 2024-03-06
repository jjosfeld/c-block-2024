#include <stdio.h>

int permtest( const unsigned int* p, int laenge){
	int sum = 0;
	for (int i = 0; i < laenge; i++){
		sum += p[i];
	}
	return (sum == (laenge * (laenge + 1))/2); //Summe der ersten n Zahlen
}

// int main(){
// 		int l;
// 		printf("laenge: "); scanf("%d", &l);
// 		int p[l];
// 		int x;
// 		for (int i = 0; i < l; i++){
// 			scanf("%d", &x);
// 			p[i] = x;
// 		}

// 		printf("\nResult: %d\n", permtest(p, l));
// 	return 0;
// }