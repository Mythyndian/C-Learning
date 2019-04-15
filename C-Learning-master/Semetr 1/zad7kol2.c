#include <stdio.h>
int main(void)
{
int tab[2][3] = {{2,5,7},{9,1}}; //
int *p0, *p1, *p2;
p0 = &tab[0][1]; 
p1 = &tab[1][0];
p2 = &tab[0][2];
*(tab[1]) = -3;

*(p0 + 1) = -6; //2 5 -6 9 1 0
*(p0 - 1) = -1;//-1 5 -6 9 1 0
*(p1 + 1) = -8;//-1 5 -6 9 -8 0
*(p2 + 1) = 2 + *(tab[0] + 2);//-1 5 -6 -4 -8 0
*(tab[1] + 2) = 4 + *(tab[1] + 2);// -1 5 -6 -4 -8 4
for(int i = 0; i < 2; i++)
{
for(int j = 0; j < 3; j++)
printf("tab[%d][%d] = %-3d  ", i, j, tab[i][j]);
putchar('\n');
}
return
0;
}
