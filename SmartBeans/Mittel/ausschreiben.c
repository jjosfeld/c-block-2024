#include <stdio.h>

int main(){
	int n;

	scanf("%d", &n);
	if (n < 0 || n > 99){
		printf("Nicht lesbar.\n");
		return 0;
	}

	switch(n){
		case 0:{
			printf("null");
			break;
		}
		case 1:{
			printf("eins");
			break;
		}
		case 11: {
			printf("elf");
			break;
		}
		case 12: {
			printf("zwölf");
			break;
		}
		case 16: {
			printf("sechzehn");
			break;
		}
		case 17: {
			printf("siebzehn");
			break;
		}

		default:{
			switch (n % 10) {
				case 1:{
					printf("ein");
					break;
				}
				case 2:{
					printf("zwei");
					break;
				}
				case 3:{
					printf("drei");
					break;
				}
				case 4:{
					printf("vier");
					break;
				}
				case 5:{
					printf("fünf");
					break;
				}
				case 6:{
					printf("sechs");
					break;
				}
				case 7:{
					printf("sieben");
					break;
				}
				case 8:{
					printf("acht");
					break;
				}
				case 9:{
					printf("neun");
					break;
				}
			}
			if (n > 20 && (n % 10) != 0){
				printf("und");
			}

			switch(n/10){
				case 1:{
					printf("zehn");
					break;
				}
				case 2:{
					printf("zwanzig");
					break;
				}
				case 3:{
					printf("dreißig");
					break;
				}
				case 4:{
					printf("vierzig");
					break;
				}
				case 5:{
					printf("fünfzig");
					break;
				}
				case 6:{
					printf("sechzig");
					break;
				}
				case 7:{
					printf("siebzig");
					break;
				}
				case 8:{
					printf("achtzig");
					break;
				}
				case 9:{
					printf("neunzig");
					break;
				}
			}
		}
	}

	printf("\n");

	return 0;
}