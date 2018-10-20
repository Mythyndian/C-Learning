#include <stdio.h>

int main(void)
	{
	int a,b;
	int wynik;
	int reszta = a;
	printf("a / b:");
	printf("a:");
	scanf("%d",&a);
	printf("b:");	
	scanf("%d",&b);
	while (reszta >= b)
		{
		reszta = reszta - b;
		wynik = wynik + 1;
		}
	printf("%d , %d",wynik,reszta);
	return 0;
	}
