#include <stdio.h>
#include <string.h>
#include <ctype.h>
void CzyPalindrom(char *t,char *ot);
int main(void){
	char t[20];
	char ot[20];
	printf("Podaj slowo:");
	gets(t);
	CzyPalindrom(t,ot);
	
}

void CzyPalindrom(char *t,char *ot){
	
	for(t = &t[strlen(t) - 1]; t > t[0]; t--){
		*ot++ = *t;
	}
	if((strcmp(t,ot)))
		printf("Wyraz jest palindromem!");
	else
		printf("Wyraz nie jest palindromem");
}

