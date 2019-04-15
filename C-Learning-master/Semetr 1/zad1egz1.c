#include <stdio.h>

int main(void)
{/*int y=2,x=1; 
if(y)x*=-1; 
if(y-->x) x+=4; 
printf("\nx=%d y=%d", x,y); */


/*int i=3,j=3, x=0; 
while(i=--j){//i = 2 j = 2 x = 0 //i = 1 j = 1// i = 0 j = 0 
    x-=j; //x = -2 //x = -3
    printf("%d\n", x);//-2 -3*/



int i, x=15; 
for(i=0;i<3 && x>3;i++){ 
  x/=2; 
  printf("\nx=%d", x); //x = 7 x = 3
} 
}
