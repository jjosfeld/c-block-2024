#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c",c);
	while (c++ < 'z') {
		printf("%c",c);
	}

	return 0;
}