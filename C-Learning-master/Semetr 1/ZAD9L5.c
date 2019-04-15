#include <stdio.h>
void print_array(long int tab[]);
void complete_array(long int tab[]);
int main(void)
{
long int kwadraty[100];
complete_array(kwadraty);
print_array(kwadraty);


}

void complete_array(long int tab[])
{
    for(int i = 0;i<100;i++)
    {
    tab[i] = (i+1)*(i+1);
    }
}

void print_array(long int tab[])
{
   for(int j = 0; j < 10; j++)
    printf("kwadraty[%d] = %5ld ",j,tab[j]);
    printf("\n\n");
    for(int k = 10; k < 20; k++)
            printf("kwadraty[%d] = %5ld ",k,tab[k]);
    printf("\n\n");
    for(int l = 20; l < 30; l++)
     printf("kwadraty[%d] = %5ld ",l,tab[l]);
     printf("\n\n");
    for(int q = 30; q < 40; q++)
    printf("kwadraty[%d] = %5ld ",q,tab[q]);
    printf("\n\n");
    for(int b = 40; b < 50; b++)
        printf("kwadraty[%d] = %5ld ",b,tab[b]);
        printf("\n\n");
    for(int a = 50; a< 60; a++)
        printf("kwadraty[%d] = %5ld ",a,tab[a]);
        printf("\n\n");
        for(int c = 60; c< 70; c++)
        printf("kwadraty[%d] = %5ld ",c,tab[c]);
            printf("\n\n");
            for(int x = 70; x< 80; x++)
        printf("kwadraty[%d] = %5ld ",x,tab[x]);
        printf("\n\n");
            for(int y = 80; y< 90; y++)
        printf("kwadraty[%d] = %5ld ",y,tab[y]);
        printf("\n\n");
    for(int z = 90; z< 100; z++)
        printf("kwadraty[%d] = %5ld ",z,tab[z]);
}
