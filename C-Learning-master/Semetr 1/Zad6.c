#include <stdio.h>

int main(void)
{
	float r,H,P;
	
	printf("Podaj dlugosc promienia: \n");
	scanf("%f",&r);
	
	printf("Podaj dlugosc wysokosci stozka: \n");
	scanf("%f",&H);
	
	P = (r*r*3.14*H)/3;
	
	printf("Objetosc stozka o promieniu %.2f cm i wysokosci %.2f cm wynosi %.2f",r,H,P);
	return 0;
}
