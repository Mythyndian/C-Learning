
#include <stdio.h>
void fun(double x, int *y, double *z, int k);
/*Zadanie 4 Zaprojektuj, napisz i przetestuj funkcj ˛e, która dokona dekompozycji liczby
zmiennoprzecinkowej (double) na cześć ułamkow ˛a i cz ˛eść całkowit ˛a (zapisane w
dwóch osobnych zmiennych).*/
int main(void){
	int b=0,ilosc;
	double c;
	double a;
	printf("Podaj liczbe: ");
	scanf("%lf",&a);
	printf("Podaj ilosc miejsc po przecinku: ");
	scanf("%d",&ilosc);
	fun(a,&b,&c,ilosc);
	printf("%d %.f",b,c);
	
	return 0;
}
void fun(double x, int *y, double *z, int k){
	*y = x;
	*z = x - (int)x;
	for(int i=1; i<=k; i++){
		*z = *z*10;
	}
}
