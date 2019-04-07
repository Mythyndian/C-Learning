#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void polaczenie(char *s3, const char *s1, const  char *s2);
int main(void){
char *t1,*t2;//wprowadzanie napisow
gets(t1);
gets(t2);

char *s1 = (char *) malloc(strlen(t1) + 1);//alokacja pamieci
char *s2 = (char *) malloc(strlen(t2) + 1);
char *s3 = (char *) malloc(strlen(t1) + strlen(t2) + 2);		

s1 = t1;
s2 = t2; 

puts(s1);//test zawartosci tablic dynamicznych
puts(s2);
putchar('\n');
polaczenie(s3,s1,s2);

puts(s3);
}

void polaczenie(char *s3, const char *s1, const  char *s2){
	while(*s1 != '\0'){
		*s3 = *s1;
		s3++;
		s1++;
		}
	while(*s2 != '\0'){
		*s3 = *s2;
		s3++;
		s2++;
		}
}
