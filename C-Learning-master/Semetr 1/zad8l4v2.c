/*Napisz program, który odczytuje znaki ze standardowego wejscia az do
wysta?pienia znaku konca pliku (EOF). Dla kazdego znaku program powinien informowac,
czy jest on litera? i jesli tak jest to program powinien wyswietlac numer litery w
alfabecie. Na przyklad, litery d i D maja? numer 4. Wykorzystaj funkcje?, która pobiera
znak jako argument i zwraca jego numer w alfabecie, jesli jest on litera?; w przeciwnym
wypadku wartoscia? zwracana? powinni byc -1 */
#include <stdio.h> // a 97 A // 65// 122 // 90
int main(void){
	char tabA[26];
	char taba[26];
	int liczba = 65;
	for(int i=0; i<26; i++){
		tabA[i] = liczba;
		liczba++;
	}
	int liczba2 = 97;
	for(int j=0; j<26; j++){
		taba[j] = liczba2;
		liczba2++;
	}
	char znak;
	int wybor,indeks;
	printf("Wybierz 1, jesli to bedzie duza litera, wybierz 2 jesli mala: ");
	scanf("%d",&wybor);
	if(wybor==1){
		printf("podaj znak: (0 konczy program)");
		scanf("%c",&znak);
		while(znak!=0){
			int jest =0;
			for(int k=0; k<26 && jest ==0; k++){
				if(znak==tabA[k]){
					jest =1;
					indeks = k;
					printf("%c to %d litera alfabetu\n",znak,k+1);
				}
			}
			printf("podaj znak: ");
			scanf("%c",&znak);
			jest =0;
		}	
	}
	if(wybor==2){
		printf("podaj znak: (0 konczy program)");
		scanf("%c",&znak);
		while(znak!=0){
			int jest =0;
			for(int k=0; k<26 && jest ==0; k++){
				if(znak==taba[k]){
					jest =1;
					indeks = k;
					printf("%c to %d litera alfabetu\n",znak,k+1);
				}
			}
			printf("podaj znak: ");
			scanf("%c",&znak);
			jest =0;
		}	
	}
	return 0;
}
