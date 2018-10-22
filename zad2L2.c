#include <stdio.h>

int main(void)
{
	double a,b;
	printf("Wprowadz a:");
	scanf("%lf",&a);
	printf("Wprowadz b:");
	scanf("%lf",&b);
	if(a == 0)
		if(b == 0)
			printf("Nieskoczenie wiele rozwiazan");
		else
			printf("Brak rozw");
	else
		if(b == 0)
			printf("x = %f",-b/a);
		else
			printf("x = %f",-b/a);
	
	
return 0;
}
