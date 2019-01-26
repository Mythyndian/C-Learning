#include <stdio.h>
#include <string.h>
int isLetter(char t);
void encryption(char t[],int size);
int main(void){
	char text[50];
	printf("Wpisz tekst do zaszyfrowania: ");
	fgets(text,50,stdin);
	encryption(text,50);
	while(getchar() != '\n')
		continue;
	printf("Tekst po zaszyfrowaniu: ");
	for(int i = 0; i < strlen(text); i++)
		printf("%c",text[i]);
	
}

void encryption(char t[],int size){
	int lenght = strlen(t);
	for(int i = 0 ;i < lenght - 1; i++){
		switch(isLetter(t[i])){
			case 1:{
				t[i] += 5;
			if(t[i] > 'Z')
				t[i] = 'A' + (t[i] - 'Z');
	
				break;
			}
			case 2:{
				t[i] += 5;
			if(t[i] > 'z')
				t[i] = 'a' + (t[i] - 'z');
	
				break;
			}
			case 3:{
				
				break;
			}
		}
		}
			
	}

int isLetter(char t){
	if(t >= 'A' && t <= 'Z')
		return 1;
	if(t >= 'a' && t <= 'z')
		return 2;
	else
		return 3;
}

