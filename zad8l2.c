#include <stdio.h>

int main(void)
	{
	int x,y,z,v;
	printf("Podaj liczbe: ");
	scanf("%d",&x);
	printf("Podaj liczbe: ");
	scanf("%d",&y);
	printf("Podaj liczbe: ");
	scanf("%d",&z);
	printf("Podaj liczbe: ");
	scanf("%d",&v);
	
	if(x > y && x > z && x > v)
		printf("Najwieksza liczba jest %d",x);
	if(y > x && y > z && y > v)
		printf("Najwieksza liczba jest %d",y);
	if(z > x && z > y && z > v)
		printf("Najwieksza liczba jest %d",z);
	if(v > x && v > y && v > z)
		printf("Najwieksza liczba jest %d",v);
	
	if(x < y && x < z && x < v)
		printf("Najmniejsza liczba jest %d",x);
	if(y < x && y < z && y < v)
		printf("Najmniejsza liczba jest %d",y);
	if(z < x && z < y && z < v)
		printf("Najmniejsza liczba jest %d",z);
	if(v < x && v < y && v < z)
		printf("Najmniejsza liczba jest %d",v);				
	else
		printf("Wszystkie liczby sa sobie rowne");
	}
