#include <stdio.h>


int main(void)
	{
	int x,y,wynik;
	char operacja;
	printf("Wpisz wyrazenie do obliczenia \n");
	scanf("%d %c %d",&x,&operacja,&y);
	printf("%d %c %d",x,operacja,y);
	switch(operacja)
	{
	case '+' :wynik = x + y;printf("\n %d %c %d = %d",x,operacja,y,wynik);break;
	case '-' :wynik = x - y;printf("\n %d %c %d = %d",x,operacja,y,wynik);break;
	case '*' :wynik = x * y;printf("\n %d %c %d = %d",x,operacja,y,wynik);break;
	case '/' :wynik = x / y;printf("\n %d %c %d = %d",x,operacja,y,wynik);break;
	default : printf("Nieprawidlowa operacja");
	}
	
	
	

	return 0;
	}
