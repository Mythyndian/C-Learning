#include <stdio.h>

int main(void)
	{
	int number,n1,n10,n100;
	printf("Wprowadz liczbe trzycyfrowa:");
	scanf("%d",&number);
	
	n1 = number % 10;
	n10 = (number % 100) / 10;
	n100 = number / 100;
	
	printf("%d%d%d",n1,n10,n100);

	}
