#include <stdio.h>
#include <math.h>
int main(void)
{
	float x;
	float v;

	printf("Podaj x: \n");
	scanf("%f",&x);

	v = 2*pow(x,5) - 4*pow(x,4) - 2*pow(x,3) - 6*pow(x,2) + x - 7;
	printf("Wartosc wyrazenia 2x^5 - 4x^4 - 2x^3 - 6x^2 + x - 7 dla wartosci x = %f wynosi %f",x,v);

return 0;
}
