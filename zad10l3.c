#include <stdio.h>
#include <ctype.h>
int main(void)
	{
	char ch;
	for(int i = 0 ; i < 5; i++)
		{
			
		printf("Podaj mala litere: ");
		scanf(" %c",&ch); //spacja przed %c ignoruje znaki biale
		
		if(ch < 'a' || ch > 'z')
		{
			i--;
			continue;
		}
		printf("%c -> %c\n", ch, toupper(ch));	//zamiast funkcji biblioteki ctype.h ch-32
		}
	}
