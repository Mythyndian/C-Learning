#include <stdio.h>

void wypisz(char ch, unsigned int x, unsigned int y);

int main(void)
	{
		int a,b;
		printf("Pobieranie znaku: \n");
		char z = getchar();
		printf("Podaj dwie liczby (rozdzielone znakiem spacji): \n");
		scanf("%d %d",&a,&b);
		
		wypisz(z,a,b);
	
	return 0;
	}
	
void wypisz(char ch, unsigned int x, unsigned int y)
	{
		for(int i = 0; i < y; i++)
		{
			for(int j = 0; j < x; j++)
				putchar(ch);
			putchar('\n');
		}
	}
