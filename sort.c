#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define W 4
#define K 4
void complete_array(double tab[][K]);
void print_array(double tab[][K]);
void sort(double tab[][K]);
int main(void){
	double tab[W][K];
	complete_array(tab);
	print_array(tab);;
	sort(tab);
	putchar('\n');
	print_array(tab);
	return 0;
}
void complete_array(double tab[][K]){
	for(int w = 0; w < W; w++){
		for(int k = 0; k < K; k++){
			if(rand() % 2 == 0)
				tab[w][k] = ((double)rand() / (rand() + 1.0) + rand());
			else
				tab[w][k] = -((double)rand() / (rand() + 1.0) + rand());
		}
	}
	
}
void print_array(double tab[][K]){
	for(int w = 0; w < W; w++){
		for(int k = 0; k < K; k++){
				printf("%9.2f ",tab[w][k]);
		}	
		printf("\n");
	}
}

void sort(double tab[][K])
{
	double temp;
	for(int w = 0; w < W; w++)// przechodzenie po wierszach
	{
		for(int k = 0; k < K; k++)// przechodzenie po kolumnach
			for(int i = (k == K - 1 && w < W - 1 ? w + 1 : w); i < W; i++) //ograniczenie do tablicy
				for(int j = (k == K - 1 ? 0 : k) ; j < K; j++) //ograniczenie do tablicy 
					if(tab[w][k] > tab[i][j])
					{
						temp = tab[w][k];
						tab[w][k] = tab[i][j];
						tab[i][j] = temp;
					}
					
	}
	
}

