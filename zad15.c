#include <stdio.h>

int main(void)
	{
	int kier,trzy;
	char cztery[4];
	printf("Wprowadz numer telefon w postaci: kierunkowy 3_cyfry 4_cyfry (np. 45 123 9801):\n");
	scanf("%2d %3d %c%c%c%c",&kier,&trzy,&cztery[0],&cztery[1],&cztery[2],&cztery[3]);
	printf("(%d) %d-%c%c-%c%c",kier,trzy,cztery[0],cztery[1],cztery[2],cztery[3]);
	return 0;
	}
