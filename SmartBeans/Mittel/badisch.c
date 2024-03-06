#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int decimal, base, digits = 1;
	char * no;
	scanf("%d %d", &decimal, &base);

	int temp = 1;
	while ((temp *= base) <= decimal){
		digits++;
	} 

	no = (char *) malloc(digits + 1);
	no[digits] = '\0';

	for (int i = 0; i < digits; i++){
		if (decimal % base <= 9){
			no[digits - i - 1] = (decimal % base) + '0';
		}
		else{
			no[digits - i - 1] = (decimal % base) - 10 + 'a';
		}
		decimal /= base;
	}

	printf("%s\n", no);
	free (no);
	return 0;
}