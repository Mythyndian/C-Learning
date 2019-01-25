#define N 1000
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef struct point{
	double x,y;
}POINT;
void complete(POINT *t,int n);
int main(void){
	POINT tab[N];
	complete(tab,N);
	printf("Points in circle %d\n",in_circle(tab));
	double iloraz = in_circle(tab)/(0.5*0.5*N);
	printf("%f",iloraz);
}

void complete(POINT *t,int n){
	srand(time(0));
	for(int i = 0; i < 1000; i++){
		t[i].x = rand() / (RAND_MAX + 0.1);
		t[i].y = rand() / (RAND_MAX + 0.1);
	}
}

int in_circle(POINT *t){
	int licznik;
	double distance;
	for(int i = 0; i < N; i++){
	distance = sqrt(pow(t[i].x - 0.5,2 )+pow(t[i].y - 0.5,2));
	if(distance <= 0.5)
		licznik++;
	}
	return licznik;
}
