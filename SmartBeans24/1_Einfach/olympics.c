#include <stdio.h>

int main(void) {
	int year;
	scanf("%d", &year);

	switch (year % 4) {
		case 0:
			printf("Sommerspiele\n");
			break;
		case 2:
			printf("Winterspiele\n");
			break;
		default:
			printf("keine Spiele\n");
		}
}