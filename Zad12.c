#include <stdio.h>

int main()
{
	int s1,s2,minut,wynik;
	printf("Podaj czas w sekundach: ");
	scanf("%d",&s1);
	wynik = s1 % 60;
	
	if(wynik != 0)
		{
		minut = (s1 - wynik)/60;
		s2 = wynik;
		printf("%d sekund to %d minut i %d sekund",s1,minut,s2);
		}
	else
		printf("%d sekund to %d minut i 0 sekund",s1,minut);
	return 0;	
}
