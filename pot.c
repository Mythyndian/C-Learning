#include <stdio.h>

int main()
{
	int x = 2;
	int wynik;
	for (int i=0;i<20;i++)
		{
		wynik = pow(x,i);
		printf("%d \n",wynik);
		}
	return 0;
}
