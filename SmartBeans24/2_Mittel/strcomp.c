#include <stdio.h>

int strcmp1 ( const char s[], const char t[]);
int strcmp2 ( const char *s , const char * t );


int main(void) {
	printf("1: %d\n", strcmp1("abc", "bbc"));
	printf("2: %d\n", strcmp2("abc", "bbc"));
}

int strcmp1 ( const char s[], const char t[]) {
	int i = 0;
	while ( s [ i ] == t [ i ] && s [ i ])
		i ++;
	return s [ i ] - t [ i ];
}


int strcmp2 ( const char *s , const char * t ) {
	while (* s == * t && * s )
		*s ++ , t ++;
	return * s - * t ;
}