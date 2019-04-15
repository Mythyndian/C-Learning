#include <stdio.h>
void bigger_number(double *a,double *b);
int main(void)
	{
	  double x,y;
	  printf("Podaj dwie liczby:");
	  scanf("%lf %lf",&x,&y);
	  printf("Liczby przed zamiana x: %f y: %f\n\n",x,y);
	  bigger_number(&x,&y);
	  printf("x: %f y: %f",x,y);
	  
	return 0;
	}
void bigger_number(double *a,double *b)
	{
	  if(*a > *b)
	    *b = *a;
	  else
	    *a = *b;
	
	}
