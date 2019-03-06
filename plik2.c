/* Tablice dwuwymiarowe*/
#include <stdio.h>
#define N 4

int diagonalna(int (*a)[N], int w){  // w - liczba wierszy
int i,j;

for(i=0; i<w; i++)	
	for(j=0; j<N; j++)
	  if(j=i && (*(a+i)+j)!=0)
	    return 0;
	return 1;
}


int main(void){
	
int m[N][N]={{1,0,0,0},{0,5,0,0},{0,0,9,0},{0,0,0,3}};
 
 printf("\nCzy diagonalna?\n");
 if((diagonalna(m,N)))
 	printf("\n-TAK");

 
 else
 	printf("\n-NIE"); 
  
return 0;
}


