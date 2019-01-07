#include <stdio.h>
#include <time.h>
#include <math.h>
#define W 10
#define K 15
void complete_random(int t[W][K]);
void print_array(int t[W][K]);
void complete_random_square(int t[W][K]);
void print_array_square(int t[W][K]);
int main(void)
	{
		
		int tab[W][K];
		int kwadraty[W][K];
		srand((unsigned)time(0));
		complete_random(tab);
		print_array(tab);
		printf("\n\n");
		new_array(tab,kwadraty);
		print_array(kwadraty);
		printf("%d\n",find_max(tab));
		printf("%d",find_max(kwadraty));
	}
void complete_random(int t[W][K])
	{
		for(int j = 0; j < W; j++)
			{
					for(int i = 0; i < K; i++)
						{
							t[j][i] = rand()%1000 + 1;	
						}
			}
	}
void print_array(int t[W][K])
	{
		for(int j = 0; j < W; j++)
			{
			for(int i = 0; i < K; i++)
				{
				printf("tab[%d][%d] = %d\n",j,i,t[j][i]);	
				}
			putchar('\n');
			}
	}
void new_array(int t[W][K],int k[W][K])
	{
			for(int j = 0; j < W; j++)
			{
				for(int i = 0; i < K; i++)
					{
						k[j][i] = t[j][i] * t[j][i];
					}
			
			}	
	}
int find_max(int t[W][K])
	{
		int current = 0;
		int indexw,indexk;
		for(int j = 0; j < W; j++)
			{
				for(int i = 0; i < K; i++)
					{
						if(t[j][i] > current)
							{
								current = t[j][i];
								indexw = j;
								indexk = i;
							}
					//printf("[%d][%d] = %d",j,i,current);
					}
			
			}	
	//printf("[%d][%d] = %d",j,i,current);
	
	return current;
	}
