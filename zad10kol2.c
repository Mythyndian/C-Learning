#include <stdio.h>
int main(void)
{
int
tab[3][5] = {{2,14,7,9,4},{6,12,18,2,3},{15,5,8,1,22}}, k;
for(int w = 0; w < 3; w++)
{
k = 0;
while(k < 5)
	{
	if(tab[w][k] % 3 == 0)
		printf("%d ", tab[w][k]); // 9 6 12 18 3 15 
	k++;
	}
}
return 0;
}
