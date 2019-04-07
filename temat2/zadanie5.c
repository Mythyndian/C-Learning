#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ToUpper(char *t);
int main(void){
char t[20] = "politechnika";	
ToUpper(t);
puts(t);
}

void ToUpper(char *t){
	for(t = &t[strlen(t) - 1]; t > t[0]; t--){
	if(*t >= 97 && *t <= 122)
		*t = toupper(*t);
}
}
