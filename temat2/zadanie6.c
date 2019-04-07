#include <stdio.h>
#include <string.h>
#include <ctype.h>
int IleWyrazow(char *t );
int main(void){
	char t[20] = "Ala ma kota";
	printf("%d",IleWyrazow(t));
	char s = ' ';
	//printf("%d",isalpha(s));
	
}

int IleWyrazow(char *t ){
	int counter;
	while(*t++ != '\0'){
		if(isalpha(*t) == 0)
		counter++;
	}
return counter;
}
