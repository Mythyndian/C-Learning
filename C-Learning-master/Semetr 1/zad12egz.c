#include <stdio.h> 
void f(int u, int *v){ 
 printf("%d %d\n", u, *v); 
 u+=2; 
*v+=3; 
 printf("%d %d\n", u, *v); 
} 
int main(void){ 
 int x=30, y=10; 
 f(x, &y); //30 10 //32 13
 printf("%d %d\n", x, y); //30 13
 f(y, &x); //13 30 //15 33
 printf("%d %d\n", x, y); //33 13
 return 0; 
} 
