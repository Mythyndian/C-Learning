#include <stdio.h>
#define N 10
int main(void){
	int tab[N] = {2,34,45,32,12,6,4,1,29,10};
	printf("%d",SzukajMax(tab,0,N-1));
	printf("%d",SzukajMin(tab,0,N-1));
}

int SzukajMin(int T[], int n1, int n2){
		int i,temp_min;
	for(i = n1; i <= n2; i++){
		 temp_min = T[i];
		if(T[i+1] < temp_min){
			temp_min = T[i+1];
		}
			
	}
return i;
}
int SzukajMax(int T[], int n1, int n2){
	int i,temp_max;
	for(i = n1; i <= n2; i++){
		temp_max = T[i];
		if(T[i+1] > temp_max)
			temp_max = T[i+1];
	}
return i;
}
