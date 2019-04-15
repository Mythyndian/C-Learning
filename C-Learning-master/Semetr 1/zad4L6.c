#include <stdio.h>
#include <time.h>
#define W 16
#define K 8
int main(void)
	{
		int tab[W][K];
		srand((unsigned)time(0));
		complete(tab);
		sort(tab);
		show(tab);
	}
void complete(int t[W][K])
	{
			for(int j = 0; j < W; j++)
			{
					for(int i = 0; i < K; i++)
						{
							t[j][i] = rand();	
						}
			}
	}
void show(int t[W][K])
	{
		for(int j = 0; j < W; j++)
			{
			for(int i = 0; i < K; i++)
				{
				printf("tab[%d][%d] = %d ",j,i,t[j][i]);	
				}
			putchar('\n');
			}
	}
void sort(int t[W][K])
	{
		int zamiana;
		int schowek;
		for(int j = 0; j < W ;j++)
			{
				do
					{		
						zamiana=0;//przed kazdym "przejazdem" petli for zmienna zamiana jest zerowana
						for (int i=0; i<K; i++)
							{
								if (t[j][i]>t[j][i+1])// jesli element tablicy jest wiekszy od nastepnego elementu
									{
										zamiana=zamiana+1; //jesli jest jakas zmiana, to zmienne zamiana powieksza swoja wartosc
										schowek=t[j][i];//wartosc t[i] jest kopiowana do schowka
										t[j][i]=t[j][i+1];//t[i] przyjmuje wartosc nastepnego elementu, gdyz jest on mniejszy
										t[j][i+1]=schowek;//kolejny element tablicy przejmuje wczesniejsza wartosc poprzedniego elementu, gdyz jest on wiekszy
									}
							}
					}while(zamiana!=0);
			}					
	}
