#include <stdio.h>
#include <string.h>
int isLetter(char t);
void encryption(char t[],int przesuniecie);
int main(void){
	char text[50];
	int przesuniecie;
	printf("Podaj przesuniecie: ");
	scanf("%d",&przesuniecie);
	printf("Wpisz tekst do zaszyfrowania: \n");
	while(getchar() != '\n')
		continue;
		
			fgets(text,50,stdin);
		
		
		
			
	encryption(text,przesuniecie);
	
	printf("Tekst po zaszyfrowaniu: ");
	for(int i = 0; i < strlen(text); i++)
		printf("%c",text[i]);
	
}

void encryption(char t[],int przesuniecie){
	int lenght = strlen(t);
	for(int i = 0 ;i < lenght - 1; i++){
		switch(isLetter(t[i])){
			case 1:{
				t[i] += przesuniecie;
			if(t[i] > 'Z')
				t[i] = 'A' + (t[i] - 'Z');
	
				break;
			}
			case 2:{
				t[i] += przesuniecie;
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
