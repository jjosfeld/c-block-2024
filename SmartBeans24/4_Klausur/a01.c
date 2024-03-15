#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// PROTOTYPE
int strclean(char *t);

// FUNCTION
int strclean(char *t) {
	if (t == NULL) {
		return -1;
	}

	int removed = 0;
	char *i = t; // index of cleaned string
	while (*t != '\0') {
		if (isgraph(*t)) {
			t++, i++; 
		}
		else {
			t++;
			removed++;
		}
		*i = *t;
	}
	return removed;
}