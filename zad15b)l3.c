#include <stdio.h>

int main(void)
	{
		int n;
		printf("Podaj liczbe wierszy: ");
		scanf("%d",&n);
		
		for(int i = 0; i < n; i++)
		{
			for(int j = n; j != 0; j--))
				putchar('*');
			putchar('\n');
		}
	}
