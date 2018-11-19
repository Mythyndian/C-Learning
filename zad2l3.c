#include <stdio.h>

int main(void)
	{
	double lp,lk,k;
	printf("Podaj liczbe poczatkowa: ");
	scanf("%lf",&lp);
	printf("Podaj liczbe koncowa: ");
	scanf("%lf",&lk);
	printf("Podaj liczbe koncowa: ");
	scanf("%lf",&k);
		while(lk > lp)
		{
			lp+=k;
			printf("%.1lf \n",lp);
		}
	}
