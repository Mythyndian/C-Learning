#include <stdio.h>

int main(void)
{
int i,j;
short a[5][5]={{3,5,8,1,2},{4,6,3,3,2},{8,1,-9,3,5},{4,6,3,3,2},{8,1,-9,3,5}}; 
     for (i=0;i<5;i++) 
      for (j=0;j<5;j++) 
		if (i>j)
		 a[i][j]=0; 
		 
for(int k = 0; k < 5;k++){
	for(int l = 0; l < 5; l++)
		printf("%hd ",a[k][l]);	
printf("\n");
}
	
		
}
