#include <stdio.h>

int main(void)
	{
	int x;
	printf("Wprowadz ilosc punktow (0 - 100):");
	scanf("%d",&x);
	if (x<=59)
		x = 1;
	else
		if(x<=69)
			x = 2;
		else
			if(x<=79)
				x=3;
			else
				if(x<=89)
					x=4;
				else
					if(x<=100)
						x=5;
	switch(x)
		{
		case 1:
			printf("Twoja ocena to E");
			break;
			
			case 2:
				printf("Twoja ocena to D");
				break;
			
			case 3:
				printf("Twoja ocena to C");
				break;
			
			case 4:
				printf("Twoja ocena to B");
				break;
			
			case 5:
				printf("Twoja ocena to A");
				break;
			default :
				printf("Nieprawidlowe dane wejsciowe");
		}
	}
