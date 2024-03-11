#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("INT_MIN: %f\n", FLT_MIN);
	printf("INT_MAX: %f\n", FLT_MAX);
	printf("DBL_MIN: %f\n", DBL_MIN);
	printf("DBL_MAX: %f\n", DBL_MAX);
	return 0;
}
