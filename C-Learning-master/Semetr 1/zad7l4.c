#include <stdio.h>

int power(int a, int n);

double negative_power(int a, int n);

int main(void)
	{
		int a,n;
		printf("Podaj podstawe potegi a i wykladnik (n>0) po spacji: \n");
		scanf("%d %d",&a,&n);
		
		if(n >= 0)
			printf("%d^%d = %d",a,n,power(a,n));
		else
			printf("%d^%d = %lf",a,n,negative_power(a,n));
		return 0;
	}

int power(int a, int n)
	{
	double wynik;
	if(n > 0)
		{
		wynik = 1;
		for(int i = 0; i<n; i++)
		wynik *=a;
		return wynik;
		}
	else
		return 1;
	}

double negative_power(int a, int n)
{
	double wynik = 1;
	for(n; n<0; n++)
	{
		wynik = wynik * 1/(double)a;
	}
	return wynik;
}
