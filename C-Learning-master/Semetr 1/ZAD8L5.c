#include <stdio.h>

int main(void)
{
    int tab[3];
    tab[0] = 1;
    tab[1] = 3;
    tab[2] = 2;
int *t0 = &tab[0];
int *t1 = &tab[1];
int *t2 = &tab[2];

*t0 *= 3;
*t1 *= 3;
*t2 *= 3;

for(int i = 0; i < 3; i++)
    printf("tab[%d] = %d\n",i,tab[i]);
}
