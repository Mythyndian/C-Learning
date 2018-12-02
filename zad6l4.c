#include <stdio.h>
/*Zadanie 6 Zaprojektuj funkcje? get_number(), która be?dzie sluzyla do pobierania liczby
calkowitej z podanego zakresu i zwracala ja?. Funkcja powinna tak dzialac, aby "zmusic"
uzytkownika do podania liczby calkowitej z podanego zakresu (zakres zdefiniowany
przez dwa argumenty funkcji). Przetestuj napisana? funkcje? w prostym programie. */
int get_number(int poczatek, int koniec);
int main(void){
	int x,y;
	printf("Podaj poczatek twojego zakresu: ");
	scanf("%d",&x);
	printf("\nPodaj koniec twojego zakresu: ");
	scanf("%d",&y);
	printf("\n\nTWOJA LICZBA: %d", get_number(x,y));
	return 0;
}
int get_number(int poczatek, int koniec){
	int a;
	int jest =0;
	printf("Podaj liczbe z podanego zakresu: ");
	while(jest==0){
		scanf("%d",&a);
		if(a>= poczatek && a<= koniec){
			return a;
			jest =1;
		}
	printf("Podaj jeszcze raz, tym razem z zakresu: ");
	}
}
