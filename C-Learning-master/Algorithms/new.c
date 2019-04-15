#define N 7
#define M 8
#include <stdio.h>
void print_array(int t[],int size);
void Sortowanie( int tab[], int size );
void Scal(int T1[], int n1, int T2[], int n2, int T3[]);
int main(void){
  int tab[N] = {0,9,15,18,21,24,78};
  int tab2[M] = {1,5,7,8,9,11,13,17};
  int tab1_2[N+M];
print_array(tab,N);
printf("\n\n");
print_array(tab2,M);
printf("\n\n");
Scal(tab,N,tab2,M,tab1_2);
printf("\n\n");
print_array(tab1_2,M+N);
Sortowanie(tab1_2,M+N);
printf("\n\n");
print_array(tab1_2,M+N);
}


void print_array(int t[],int size){
  for(int i = 0; i<size; i++){
    printf("%d\n",t[i]);
  }
}

void Scal(int T1[], int n1, int T2[], int n2, int T3[]){
for(int i = 0; i < N; i++){
  T3[i] = T1[i];
}
for(int i = 0; i < M; i++){
  T3[N+i] = T2[i];
}

}
void Sortowanie( int tab[], int size )
{
    int temp, j;

    for( int i = 1; i < size; i++ )
    {
        temp = tab[ i ];

        for( j = i - 1; j >= 0 && tab[ j ] > temp; j-- )
             tab[ j + 1 ] = tab[ j ];

        tab[ j + 1 ] = temp;
    }
}
