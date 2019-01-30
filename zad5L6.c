#include <stdio.h>
#define N 26
void complete_array(char recta[][N]);
void print_array(char recta[][N]);
void encryption_text(char text[], char ctext[], char key[], char recta [][N], int size_of_text);
void decryption_text(char text[], char ctext[], char key[], char recta [][N], int size_of_text);
int main(void){
	char tab_recta[N][N];
	char text[] = {'P','R','O','G','R','A','M'};
	char key[] = {'T','P','I','N','A','S','T'};
	char ciphertext[sizeof(text)/sizeof(text[0])];
	char tab[sizeof(text)/sizeof(text[0])];
	complete_array(tab_recta);
	encryption_text(text, ciphertext, key, tab_recta, sizeof(text)/sizeof(text[0]));
	decryption_text(tab , ciphertext, key, tab_recta, sizeof(text)/sizeof(text[0]));
	for(int i = 0; i < sizeof(text)/sizeof(text[0]); i++){
		printf("%2c", ciphertext[i]);
	}
	printf("\n");
	for(int i = 0; i < sizeof(text)/sizeof(text[0]); i++){
		printf("%2c", tab[i]);
	}
	
//	print_array(tab_recta);
 	return 0;
}

void print_array(char recta[][N]){
	for(int w = 0; w < N; w++){
		for(int k = 0; k < N; k++){
			printf("%2c", recta[w][k]);
		}
		putchar('\n');
	}
}
void complete_array(char recta[][N]){
	for(int w = 0; w < N; w++){
		for(int k = 0; k < N; k++){
			recta[w][k] = 'A' + (k+w)%26;
		}
	}
}
void encryption_text(char text[], char ctext[], char key[], char recta [][N], int size_of_text){
	for(int i = 0; i < size_of_text; i++){
		ctext[i] = recta[key[i] - 'A'][text[i] - 'A'];
	}
	
}
void decryption_text(char tab[], char ctext[], char key[], char recta [][N], int size_of_text){
	for(int i = 0; i < size_of_text; i++){
		for(int m = 0; m < N; m++){
			if(recta[key[i] - 'A'][m] == ctext[i])
				tab[i] = recta[0][m];
		}
	}
	
}
