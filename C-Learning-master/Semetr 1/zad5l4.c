#include <stdio.h>

int power(int a, int n);

int main(void)
	{
		int a,n;
		printf("Podaj podstawe potegi a i wykladnik (n>0) po spacji: \n");
		scanf("%d %d",&a,&n);
		if(n > 0)
		printf("%d^%d = %d",a,n,power(a,n));
	
		else
			printf("n <= 0 wrong input");
		
		return 0;
	}

int power(int a, int n)
	{
		int wynik = 1;
		for(int i = 0; i<n; i++)
		wynik *=a;
		return wynik;
	}
