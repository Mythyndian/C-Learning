#include <stdio.h>
//Funkcja moze zwracac tylko jedna wartosc
double max(double , double y);

int main(void)
	{
		double a,b;
		printf("Podaj dwie liczby");
		scanf("%lf %lf",&a,&b);
		printf("%lf",max(a,b));
	}
double max(double x,double y)
{
	double maks;		/*Mozna to zastapic przez return x > y ? x : y; */
	maks = x;
	if(y>maks)
		maks = y;
	return maks;
}
