#include <stdio.h>

main(void)
{
	float x,v;
	
	printf("Podaj x: \n");
	scanf("%f",&x);
	
	v = x*(x*(x*(x*(2*x-4)-2)-6)+1)-7;
	 	
	printf("Wartosc wyrazenia x(x(x(x(2x-4)-2)-6)+1)-7 dla x = %f wynosi %f",x,v);
}
