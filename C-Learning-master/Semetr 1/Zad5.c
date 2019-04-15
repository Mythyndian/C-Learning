#include <stdio.h>

int main(void)
{
	float a,h,p;
	
	printf("Podaj dlugosc podstawy trojkata: \n");
	scanf("%f",&a);
	
	printf("Podaj dlugosc wysokosci podstawy: \n");
	scanf("%f",&h);
	
	p = (a*h)/2;
	
	printf("Pole trojkata o podstawie a = %.2f cm i wysokosci h = %.2f cm wynosi %.2f cm^2.",a,h,p);
	
	return 0;
}
