#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char message[161], m_toni[161], m_tomke[161];
	int i = 0;
	while((message[i] = getchar()) != '\n'){
		i++;
	}
	message[i] = '\0';

	int len = strlen(message), toni = 0, tomke = 0;
	char c;

	for (int i = 0; i < len; i++){
		c = message[i];
		if (isalpha(c)){
			switch(isupper(c) != 0){
				case 1:{
					m_toni[toni++] = c;
					break;
				}
				case 0:{
					m_tomke[tomke++] = c;
					break;
				}
			}
		}
	}
	m_toni[toni] = '\0';
	m_tomke[tomke] = '\0';


	printf("Nachricht an Toni: %s\n", m_toni);
	printf("Nachricht an Tomke: %s\n", m_tomke);
	return 0;
}