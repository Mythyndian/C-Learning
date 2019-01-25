#include <stdio.h>
#include <time.h>
typedef struct point{
	int x,y;
}POINT;

typedef struct rectangle{
	POINT p,q;
	int area;
	char colour_CMYK[4];
}RECTANGLE;

int main(void){
	
	RECTANGLE tab[10];
	complete(tab,10);
	show(tab,10);
	return 0;
}

void complete(RECTANGLE *t,int size){
	int a,b,c;
	srand(time(0));
	for(int i = 0; i < size; i++){
		t[i].p.x = rand()%11;
		t[i].p.y = rand()%11;
		t[i].q.x = rand()%11 + (rand()%11+1);
		t[i].q.y = rand()%11 + (rand()%11+1);
		
		if(t[i].p.x > t[i].q.x)
			a = t[i].p.x - t[i].q.x;
		else
			a = t[i].q.x - t[i].p.x;
		if(t[i].p.y > t[i].q.y)
			b = t[i].p.y - t[i].q.y;
		else
			b = t[i].q.y - t[i].p.y;
		t[i].area = a * b;
		for(int j = 0; j < 4; j++){
			t[i].colour_CMYK[j] = rand()%101;
		}
		
	}
}

void show(RECTANGLE *t, int size){
	for(int i = 0; i < size; i++)
		printf("Prostokat nr %2d (%2d, %2d)x(%2d, %2d), pole = %3d , kolor CMYK [ %3d, %3d, %3d, %3d ]\n",i+1,t[i].p.x,t[i].p.y,t[i].q.x,t[i].q.y,t[i].area,t[i].colour_CMYK[0],t[i].colour_CMYK[1],t[i].colour_CMYK[2],t[i].colour_CMYK[3]);
}
