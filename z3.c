#include <stdio.h>
#define W 3
#define K 4
int sum(int *start,int *stop);
int main(void)
{
int tab[W][K] = {{2,3,4,5},{1,0,2,1},{3,4,3,7}};
int *p, *q;
p = &tab[0][3];
q = &tab[2][2];
printf("%d\n", sum(tab[0], p)); //14
printf("%d\n", sum(p, tab[2])); //12
printf("%d\n", sum(&tab[2][0], q));//10
printf("%d\n", sum(tab[1] + 1, tab[1] + 3));
printf("%d\n", sum(tab[1] + 1, tab[1] + 3));//4
printf("%d\n", sum(p + 4, q + 1));//9
return 0;
} 
int sum(int *start, int *stop)
{
int temp = 0;
for(int *s = start; s <= stop; s++)
	temp += *s;
return temp;
}
