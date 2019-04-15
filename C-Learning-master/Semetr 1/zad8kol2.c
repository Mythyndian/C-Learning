#include <stdio.h>
float f1(float *p);
float f2(float *p1, float *p2);
int main(void)
{
float x = 2.5f, y = 1.5f;
printf("%.1f\n", 2.0f * f2(&x,&y));// 2,5 + 1,5 = 8.0
printf("%.1f  %.1f\n", f1(&x), f1(&y)); // 7 5
printf("%.1f  %.1f\n", x, y);// 3,5 2,5
return 0;
}
float f1(float *p)
{
(*p) += 1.0;
return 2 * (*p);
}
float f2(float *p1, float *p2)
{
return *p1 + *p2;
}
