#include <stdio.h>

int main(void)
	{
		int n;
		printf("Podaj liczbe wierszy: ");
		scanf("%d",&n);
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j <= i; j++)
				putchar('*');
			putchar('\n');
		}
	}
