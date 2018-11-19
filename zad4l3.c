#include <stdio.h>

int main(void)
	{
	double number,max;
		printf("Podaj liczbe: ");
		scanf("%lf",&number);
	
	max = number;
	
	while(number > 0)
		{
		printf("Podaj liczbe: ");
		scanf("%lf",&number);
		
		if(number > max)
			max = number;
		}
		printf("%lf",max);
	}
