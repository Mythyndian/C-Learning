#include <stdio.h>

int main(void)
{
int i=5, j=50, k=56;  
 int *p =&i;  int *q=&k; 
 j=*q/ *p;  //j = 11
 *p=3**p;  //i = 15
 p=q; 
 *p%=*q;  	
 printf("%d %d %d",i,j,k); //15 11 0
}
