#include <stdio.h>

int exchange(char* s, char a, char b){
	int count = 0;
	while (*s){
		if (*s == a){
			*s = b;
			count++;
		}
		s++;
	}
	return count;
}

// int main(){
// 	char s[] = "anna";
// 	int n = exchange(s, 's', 'o');
// 	printf("s : %s\nn: %d\n", s, n);
// }