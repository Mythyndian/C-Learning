#include <stdio.h>

double sr_harmoniczna(double x,double y);

int main(void)
	{
		double a,b;
		printf("Podaj dwie liczby (rozdzielone znakiem spacji): \n");
		scanf("%lf %lf",&a,&b);
		printf("Srednia harmoniczna licz wyniosi: %lf",sr_harmoniczna(a,b));
		
		return 0;
	}
	
double sr_harmoniczna(double x,double y)
	{
		return ((1/x) + (1/y))/2;
	}
