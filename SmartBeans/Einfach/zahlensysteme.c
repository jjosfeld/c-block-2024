#include <stdio.h>

int main(){
	int x;
	while (scanf("%d", &x) != EOF){
		printf("OKT: %o, HEX: %x\n", x, x);
		// printf("%d\n", x);
		// break;
	}
	return 0;
}