#include <stdio.h>
#include <string.h>
#include <ctype.h>
int Find(char *t, char c);
int main(void){
	char t[20] = "Ala ma kota";
	printf("%d",Find(t,'a'));
}

int Find(char *t, char c){
	int index;
	for(int i = 0; i < strlen(t); i++){
		if(t[i] == c)
			index = i;
	}
return index;
}
