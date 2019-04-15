/* Tablice jednowymiarowe a wskazniki*/
#include <stdio.h>

int licz(double *p1, double *p2, double x);

int main(void){
double t[]={8.0, 2.0, 1.0, 6.0, 2.0, 7.0, 5.0, 2.0, 9.0};
 
int n= licz(t, t+8, 2.0);

printf("%d\n", n);

return 0;
}

int licz(double *p1, double *p2, double x){
	int counter;
	for(double *i = p1; i < p2; i++){
		if(*i == x)
		counter++;
	}
return counter;
}


 
