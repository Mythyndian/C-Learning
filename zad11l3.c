#include <stdio.h>

int main(void)
	{
		double month_salary, sum = 0.0;
		int counter = 0;
		
		while(1)
	{
	
		printf("Podaj pensje miesieczna: ");
		scanf("%lf",&month_salary);
		if(month_salary < 0.0)
			break;
		if(month_salary * 12 < 25000)
			continue;
		counter++;
		sum +=  month_salary;
		
	}
	printf("Srednia dla wysokich pensji %f", counter ? sum/counter : 0.0);	
		
		return 0;
	}
