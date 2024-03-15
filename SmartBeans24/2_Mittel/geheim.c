#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// PROTOTYPES ============================
char* convert_message(const char *message, char receiver);

// // MAIN ==================================
// int main(void) {

// 	char *answer = convert_message("asöflkjasöflkj awöefkj", '4');
// 	printf("%s\n", answer);
// 	// free(answer);
// 	return 0;
// }

// FUNCTIONS =============================
char* convert_message(const char *message, char receiver) {
	// Fehler abfangen
	if (message == NULL) {
		return NULL;
	}

	//correct receiver?
	if (receiver != 'M' && receiver != 'L') {
		return "Mit dir schreib ich nicht!";
	}

	char *m_out;
	m_out = malloc(strlen(message+1) * sizeof(char));
	// Fehler abfangen
	if (m_out == NULL) {
		return NULL;
	}

	int i = 0, capital = (receiver == 'L'); // Message to Luca starts with capital
	char c;
	while ((c = *message++) != '\0') {
		if (isalpha(c)) {
			if (capital) {
				m_out[i] = toupper(c);
			}
			else {
				m_out[i] = tolower(c);
			}
			capital = !capital;
		}
		else {
			m_out[i] = c;
		}
		i++;
	}


	return m_out;
}