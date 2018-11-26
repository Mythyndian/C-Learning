#include <stdio.h>

int main(void)
	{
		char c;
		printf("Podaj litere c:");
		scanf("%c",&c);
		
		for(char ch = 'A'; ch <= c; ch++)
		{
			for(char s1 = c; s1 > ch; s1--)
				putchar(' ');
			for(char s2 = 'A'; s2  <= ch; s2++)
				putchar(s2);
			for(char s3 = ch - 1; s3 >= 'A'; s3-- )
				putchar(s3);
			
			
			putchar('\n');
		}
		
		return 0;
	}
