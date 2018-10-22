#include <stdio.h>

int main(void)
	{
	int part0, part1, part2;
	printf("Wprowadz numer telefon w postaci: kierunkowy 3_cyfry 4_cyfry (np. 45 123 9801):\n");
	scanf("%d %d %d",&part0,&part1,&part2);
	printf("\n %.2d %.3d %.2d %.2d", part0, part1 ,part2 / 100, part2 % 100);
	return 0;
	}
