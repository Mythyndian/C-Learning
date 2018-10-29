#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,x,b,c,delta,x1,x2;
	printf("y = ax^2 + bx + c\n");
	printf("Wprowadz a:");
	scanf("%lf",&a);
	printf("Wprowadz b:");
	scanf("%lf",&b);
	printf("Wprowadz c:");	
	scanf("%lf",&c);
	
	if(a != 0)
	{
	delta = b*b - 4*a*c;
	if(delta == 0)
		printf("Jedno rozwiazanie x =%lf",-b/a);
	else
		if(delta < 0)
			printf("Zero rozwiazan");
		else
			{
			x1 = (-b-sqrt(delta))/2*a;
			x2 = (-b+sqrt(delta))/2*a;
			printf("Dwa rozwiazania x = %lf i x = %lf",x1,x2);
			}
	}
return 0;
}
