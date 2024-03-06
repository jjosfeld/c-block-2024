#include <stdio.h>

int main(void) 
{
	int no;
	scanf("%d", &no);

	while (no >= 1) {
		printf("%d ", no);
		no--;
	}
	printf("\n");

	return 0;

}