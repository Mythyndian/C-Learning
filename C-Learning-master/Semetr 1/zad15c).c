#include <stdio.h>

int main(void)
	{
		int n;
		printf("podaj n: ");
		scanf("%d",&n);
		
		for(int i = 0; i<n; i++)
		{
			for(int j = n-i-1; j > 0; j--)
				putchar(' ');
			
			
			for(int k = 0; k < (2 * i + 1); k++)
				putchar('*');
			
			putchar('\n');
		}
		
		return 0;
	}
