#include <stdio.h>

int main(){
	int year;
	scanf("%d", &year);
	// printf("%d\n", year % 4);
	switch(year % 4){
		case 0:
			printf("Sommerspiele\n");
			break;
		case 2:
			printf("Winterspiele\n");
			break;
		default:
			printf("keine Spiele\n");
			break;

	}
	return 0;
}