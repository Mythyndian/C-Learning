#include <stdio.h>
void f(int x, int *p)
{
*p *= 3;
x = *p + x;
printf("%2d %2d\n", x, 2 * (*p)); //56 84
}
int main(void)
{
int a = 5, b = 7, *wsk1 = &b, *wsk2 = &a; // wsk1 -> b	wsk2 -> a
a = *wsk1 - 1; // a == 6
b = 2 * *wsk1; // b == 14
printf("%2d %2d\n", a, b);
*wsk2 -= 3; // a == 3
f(b, wsk1); 
printf("%2d %2d\n", ++a, --b); //4 13
return 0;
}
