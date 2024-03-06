#include <stdio.h>
#include <string.h>

char *strinv(const char *s){
	printf("test\n");
	int len = strlen(s);
	char * rev;
	char * start;
	rev = "01234567";
	// start = rev;
	*rev = 'X';
	// printf("%d\n", (int) strlen(rev));
	return rev;
}

char *strconcat(const char *s, const char *t){
	char cat[strlen(s) + strlen(t) + 1];
	strcpy(cat, s);
	
	return strcat(cat, t);
}

char * reverse(char *string) 
{
   int length, c;
   char *begin, *end, temp, *rev;
 
   length = strlen(string);
 
   begin = string;
   end = string;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
 
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      *end = 'X';
      *begin = temp;
 
      begin++;
      end--;
   }
   rev = string;
   return rev;
}

int main(int argc, char const *argv[])
{
	char s[6] = "Hallo";
	char * t = reverse(s);
	printf("%s\n", s);
	// printf("%s\n", strinv("Hallo"));
	return 0;
}