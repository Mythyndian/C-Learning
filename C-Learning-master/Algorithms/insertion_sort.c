#define N 10
#include <stdio.h>

void InsertionSort(int T[], int n);
void PrintArray(int T[], int n);
void Swap(int *j, int *k);
int main(void){
	int T[N] = {10,9,8,7,6,5,4,3,2,1};
	InsertionSort(T,N);
	PrintArray(T,N);
	
}

void InsertionSort(int T[], int n){
	int j,temp, i = 1;
	while(i < N){
		while(j > 0 && T[j-1] > T[j]){
			Swap(&T[j],&T[j-1]);
			j--;
		}
	i++;
	}
}


void PrintArray(int T[], int n){
	int i;
	printf("T[N] = ");
	for(i = 0; i < n; i++){
		printf("%d ",T[i]);
	}
}

void Swap(int *j, int *k){
	int temp = *j;
	*j = *k;
	*k = temp;
}
