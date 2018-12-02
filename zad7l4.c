#include <stdio.h>

int power(int a, int n);

int main(void)
	{
		int a,n;
		printf("Podaj podstawe potegi a i wykladnik (n>0) po spacji: \n");
		scanf("%d %d",&a,&n);
		printf("%d^%d = %d",a,n,power(a,n));
		
		return 0;
	}

int power(int a, int n)
	{
	int wynik;
	if(n > 0)
		{
		wynik = 1;
		for(int i = 0; i<n; i++)
		wynik *=a;
		return wynik;
		}
	else
		if(n == 0)
			wynik = 1;
	else
		{
		wynik = 1;
		for(int i = 0; i>n; i--)
		wynik *=1/a;
		return wynik;
		}

	}
