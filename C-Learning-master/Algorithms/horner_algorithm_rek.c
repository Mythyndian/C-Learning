#include <stdio.h>
void PrintArray(double T[],int n);
double HornerAlgorithm(double W[],double x,int n);

int main(void){
	int n,i;
	double x;
	printf("Podaj numer n wspolczynnika wielomianu: ");
	scanf("%d",&n);
	printf("Podaj x: ");
	scanf("%lf",&x);
	double w[n+1];
	for(i = 0; i < n+1; i++){
		printf("Podaj wspoczynnik a[%d] = ",i);
		scanf("%lf",&w[i]);
		
	}
	PrintArray(w,n);
	printf("Wartosc wielomianu = %.2f",HornerAlgorithm(w,x,n+1));
	printf("%.2f",HornerAlgorithm(w,x,n+1));
}

void PrintArray(double T[],int n){
	int i;
	for(i = 0; i < n; i++){
		printf(" T[%d] = ",i);
		printf("%.2f",T[i]);
	}
}

double HornerAlgorithm(double W[],double x,int n){
double sum;
sum += (W[n-1] * +W[n-2]) * x;
return HornerAlgorithm(W,x,n);
}

