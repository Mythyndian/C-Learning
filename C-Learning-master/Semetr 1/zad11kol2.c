#include <stdio.h>
#define N 6
int main(void)
{
int tab[N], i, *p1 = tab, *p2 = &tab[2];// p1 -> tab[0] p2 -> tab[2]
for(i = 0; i < N; i++)
	tab[i] = 2 * (i + 1); // 2 4 6 8 10 12
*p1 = -3; *p2 = -1; tab[4] = -4; *(tab + 5) -= 2;
for(i = 0; i < N; i++)
	printf("%d ", tab[i]); // -3 0 -1 8 -4 10 
return 0;
}
