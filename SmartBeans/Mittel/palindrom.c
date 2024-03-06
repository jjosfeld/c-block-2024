#include <stdio.h>

int main(){
	char str[21];
	int len;

	scanf("%s", str);
	scanf("%d", &len);

	for (int i = 0; i < (len / 2); i++){
		// printf("%c vs %c\n", str[i], str[len-i-1]);
		if (str[i] != str[len-i-1]){
			printf("kein palindrom\n");
			return 0;
		}
	}

	printf("palindrom\n");

	return 0;

}