#include <stdio.h>

int main(void)
	{
	char ch;
	int counter = 0;
	
	
	
	while((ch = getchar()) != EOF) //ch != '#'
		{
			if(ch == '!')
			{
				putchar('!');
				putchar('!');
				counter++;
			}
			else 
				if(ch == '.')
				{
				putchar('!');
				counter++;
				}
			else
				putchar(ch);
			
			ch = getchar();
		}	
		printf("Liczba zmian to %d",counter);
		return 0;
	}
