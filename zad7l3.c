#include <stdio.h>
#define PA 0.1
#define PF 0.06
int main(void)
	{
		const double base = 1000.0;
		double profit_AGATA = base, profit_FRANEK = base;
		int years = 0;
		
		do
		{
			profit_AGATA += base * PA;
			profit_FRANEK += profit_FRANEK * PF;
			years++;
			printf("Years: %d \t Zysk Franka %lf \t Zysk Agaty %lf \n",years,profit_FRANEK,profit_AGATA);
		}while(profit_FRANEK < profit_AGATA);
	}
