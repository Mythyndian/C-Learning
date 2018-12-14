#include <stdio.h>
#include <math.h>
    void get_double_plus(double *h,double *r);
    void get_data(double *h,double *r);
    double area_of_cone(double *h,double *r);
    int main(void)
{
    double height,radius;
    get_data(&height,&radius);
    get_double_plus(&height,&radius);
    printf("Area of cone: %f cm^2",area_of_cone(&height,&radius));
    return 0;
}
void get_data(double *h,double *r)
{

    printf("Podaj height:  ");
    scanf("%lf",&*h);
    printf("Podaj radius: ");
    scanf("%lf",&*r);
    printf("*h = %f",*h);
    printf("*r = %f",*r);
}
void get_double_plus(double *h,double *r)
{
    if(*h > 0 && *r > 0)
        printf("Height and radius input correct\n");
    else
        printf("Height and radius input incorrect\n");
}

double area_of_cone(double *h,double *r)
{
    double l = sqrt(*h * *h + *r * *r);
    double area = M_PI * *r * (*r + l);
    return area;
}
