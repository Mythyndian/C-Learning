#include <stdio.h>
#include <math.h>
double	get_double_plus(void);
double get_area(double *h ,double *r);
void get_data(double *h,double *r);   
    int main(void)
	{
	double height,radius;
	get_data(&height,&radius);
	
	printf("pole %f", get_area(&height,&radius));
	return 0;
	}

	


void clean(void)
{
	while(getchar() != '\n')
		continue;
}

void get_data(double *h,double *r)
	{
		*h = get_double_plus();
		*r = get_double_plus();
	}


double	get_double_plus(void)
{	
		double number;
		
		while(1)
		{
			printf("Podaj dodatnia liczbe naturalna");
			if(scanf("%lf",&number) && number > 0 )
			return number;
		}	
}

double get_area(double *h ,double *r)
{
	double M_PI = 3.14;
	double area,l;
	 l = sqrt(pow(*r,2) + pow(*h,2));
	area = M_PI * l * *r + M_PI * pow(*r,2);
	return area;
}
