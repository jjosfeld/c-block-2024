#include <stdio.h>
#include <ctype.h>

int main(){
	int n;
	char message[100], cypher[100];
	
	/* READ IN MESSAGE */
	int i;
	i = 0;
	while ( i < 100 && (message[i] = getchar ()) != '\n') {
		i ++;
	}
	message[i] = '\0';

	scanf("%d", &n);

	char c;
	for(int j = 0; j <= i; j++){
		if(isalpha(message[j])){
			c = message[j];
			switch(c >= 'a'){
				case 0:{
					cypher[j] = 'A' + (c - 'A' + n) % 26;
					break;
				}
				case 1:{
					cypher[j] = 'a' + (c - 'a' + n) % 26;
				}
			}
		}
		else{
			cypher[j] = message[j];
		}
	}

	printf("%s\n", cypher);

	return 0;
}