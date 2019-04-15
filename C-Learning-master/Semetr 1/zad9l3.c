#include <stdio.h>
int main(void)
	{
	int n, counter = 0;
	double mean,mark,sum = 0.0;
	printf("Ilosc student (n) : ");
	scanf("%d",&n);
	
	for(int i = 0; i <= n; i++)
		{
		
			printf("Podaj ocene studenta nr %d",i+1);	
		scanf("%lf",&mark);
		if(mark < 0.0)
			break;
		sum += mark;
		counter++;
		}
		
	
	printf("Srednia wynosi %lf",sum/counter);
	return 0;
	}
