#include <stdio.h>

int main(void)
	{
	int l1,m1,l2,m2;
	printf("Podaj pierwszy ulamek w formacie licznik/mianownik:\n");
	scanf("%d/%d",&l1,&m1);
	printf("Podaj drugi ulamek w formacie licznik/mianownik:\n");
	scanf("%d/%d",&l2,&m2);
	if(m1 == m2)
		printf("Oto wynik: %d/%d + %d/%d = %d/%d",l1,m1,l2,m2,l1+l2,m2);
	else
		printf("Oto wynik: %d/%d + %d/%d = %d/%d",l1,m1,l2,m2,(l1*m2)+(l2*m1),m2*m1);
	return 0;
	}
