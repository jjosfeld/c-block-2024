#include <stdio.h>
#include <string.h>


int strendX(const char *s, const char *t){
	int len_s = (strlen(s)), len_t = (strlen(t));
	if (strstr(s, t) == NULL){
		return 0;
	}
	for (int i = 0; i < len_t; i++){
		if (s[len_s - i] != t[len_t - i]){
			return 0;
		}
	}
	return 1;
}

char *strchrX(const char *s, int c){
	return strrchr(s, c);
}

char *strstrX(const char *s, const char *t){
	return strstr(s, t);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d\n", strendX("", " "));
// 	return 0;
// }