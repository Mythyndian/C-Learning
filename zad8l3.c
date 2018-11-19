#include <stdio.h>
#include <math.h>
int main(void)
	{
	int input_q;
	int s = -1;
	double sum1,sum2;
	printf("Wprowadz ilosc wyrazow sumowanych szeregu: ");
	scanf("%d",&input_q);
	
	for(int i = 0;i<=input_q;i++)
		{
		s *= -1;
		sum1 += 1.0/(i+1);
		//sum2 += pow(-1,i) * 1.0/(i+1);
		sum2 += s * 1.0/(i+1);
		}
	printf("\n suma1 = %f", sum1);
	printf("\n suma2 = %f", sum2);
	return 0;
	}
	
