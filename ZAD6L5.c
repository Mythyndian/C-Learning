#include <stdio.h>
int main(void)
{
double tab[8];
for(int i = 0; i < 8; i++)
{
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf",&tab[i]);
}

for(int j = 7;j >= 0;j--)
    printf("tab[%d] = %f\n",j,tab[j]);
return 0;
}
