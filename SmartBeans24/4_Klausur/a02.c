#include <limits.h>

//  PROTOTYPE
int sequence(int x, int n);

// FUNCTION
int sequence(int x, int n) {
	int result = 0;

	for (int i = 0; i <= n; i++) {
		if (i == 0) {
			result += x;
		}
		else {
			if (result % 2 == 1) {
				// Ganzzahlüberlauf verhindern
				if (result > (INT_MAX - 1) / 3) {
					return -1;
				}
				result = result * 3 + 1;
			}
			else {
				result /= 2;
			}
		}
	}

	return result;
}