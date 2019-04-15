#include <stdio.h>

int main(void)
	{
	int liczba;
	int i = 0;
	printf("Podaj liczbe: ");
	scanf("%d",&liczba);
	
	while(i < 10)
		{
		liczba++;
		printf("%d\n",liczba);
		i++;
		}
	}
