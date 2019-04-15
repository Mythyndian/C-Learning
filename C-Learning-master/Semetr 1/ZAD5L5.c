#include <stdio.h>
#define SIZE 10
int main(void)
{
    int tab[SIZE];
    for(int i = 0;i < 10;i++)
    {
        printf("Wprowadz liczbe: ");
        scanf("%d",&tab[i]);
    }

    for(int j = 0;j<10;j++)
    {
        printf("tab[%d] = %d \n\n4
               3",j,tab[j]);
    }

return 0;
}
