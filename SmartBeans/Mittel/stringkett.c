#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str_a[15];
	char str_b[29];

	int i = 0;
	while (i < 15 && (str_a[i] = (char) getchar()) != '\n'){
		i++;
	}
	if (i == 15){
		printf("Fehler");
		return 0;
	}
	str_a[i] = '\0';
	
	int j = 0;
	while (j < 15 && ((str_b[j] = getchar())) != '\n'){
		j++;
	}

	if (i == 15){
		printf("Fehler\n");
		return 0;
	}

	i = 0;
	while(str_b[j] = str_a[i]){
		i++; j++;
	}

	printf("%s\n", str_b);

	return 0;
}