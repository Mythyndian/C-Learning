#include <stdio.h>
#include <string.h>
void reverse(char *t, char *r);
int main(void){
char t1[20] = "Ala ma kota";
char t2[20];

reverse(t1,t2);
puts(t2);


}

void reverse(char *t,char *r){


for(t = &t[strlen(t) - 1]; t > t[0]; t--){
	*r++ = *t;
}
		
	
	
}
