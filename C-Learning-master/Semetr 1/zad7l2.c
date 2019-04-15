#include <stdio.h>

int main(void)
	{
	int x;
	printf("Wprowadz predkosc wiatru (wezly) : ");
	scanf("%d",&x);
	if(x < 1)
		printf("Cisza");
	else
		if(x <= 3)
			printf("Zefir");
		else
			if(x <= 27)
				printf("Bryza");
			else
				if(x <= 47)
					printf("Wichura");
				else
					if(x <= 63)
						printf("Sztorm");
					else
						if(x > 63)
							printf("Huragan");
	return 0;
	}
