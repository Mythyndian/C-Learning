#include <stdio.h>

int main(void){
	char t1[50] = "";
	const char t2[50] = "Ala ma kota     ";
	replace_(t1,t2);
	puts(t2);
	puts(t1);
		
}

void replace_(char * t1, const char *t2){
	while((*t1=*t2) != '\0'){
		if(*t2 == ' '){
			*t1 = '_';
			t1++;
			t2++;
		}
		else{
			t1++;
			t2++;
		}	
		
		
	}
}
