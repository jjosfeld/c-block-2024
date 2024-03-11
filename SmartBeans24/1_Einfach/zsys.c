#include <stdio.h>

int main(void)
{
	int n;

	while(scanf("%d", &n) != EOF) {
		printf("OKT: %o, HEX: %x\n", n, n);
	} 
	return 0;
}